#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define IR_SENSOR_PIN A1  // TCRT5000 connected to A1

LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C LCD, adjust address if needed

void setup() {
    Serial.begin(9600);  // Initialize serial communication for Bluetooth (HC-05) and Serial Monitor
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("TCRT5000 Test");
    delay(2000);
    lcd.clear();
}

void loop() {
    int sensorValue = analogRead(IR_SENSOR_PIN);  // Read sensor value
    float voltage = (sensorValue / 1023.0) * 5.0;  // Convert to voltage

    // Glucose Calculation Formula
    float glucose = (voltage * 100) + 70;  // Adjusted to start from 70 mg/dL
    if (glucose < 70) glucose = 70;  // Set minimum glucose value to 70
    if (glucose > 400) glucose = 400;  // Set maximum glucose value

    // Determine Glucose Status
    String status;
    if (glucose < 140) status = "Normal";
    else if (glucose < 200) status = "Prediabetes";
    else status = "Diabetes";

    // Display Glucose & Status on LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Glucose: ");
    lcd.print(glucose, 1);
    lcd.print(" mg/dL");

    lcd.setCursor(0, 1);
    lcd.print("Status: ");
    lcd.print(status);

    // Send Glucose and Status via Bluetooth (HC-05) to Serial Monitor
    Serial.print("Glucose: "); Serial.print(glucose, 1);
    Serial.print(" mg/dL | Status: "); Serial.println(status);

    delay(1000);  // Adjust delay for stable readings
}