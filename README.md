# 🩺 Glucose Monitoring System using TCRT5000, Arduino & HC-05

This project demonstrates a basic glucose monitoring simulation using the TCRT5000 infrared sensor, an I2C LCD display, and Bluetooth communication via the HC-05 module. It reads analog values from the IR sensor, converts them to voltage, estimates glucose levels, and classifies the reading as **Normal**, **Prediabetes**, or **Diabetes**.

---

## 🚀 Features

- 📟 Real-time glucose value display on a 16x2 I2C LCD
- 📶 Wireless data transmission via HC-05 Bluetooth to Serial Monitor
- 📈 Glucose level estimation using a simulated formula
- 🧠 Health status classification (Normal / Prediabetes / Diabetes)
- 🔧 Adjustable voltage-to-glucose mapping for different sensor setups

---

## 🛠️ Components Used

| Component           | Quantity |
|--------------------|----------|
| Arduino Uno        | 1        |
| TCRT5000 IR Sensor | 1        |
| I2C 16x2 LCD       | 1        |
| HC-05 Bluetooth    | 1        |
| Jumper Wires       | -        |
| Breadboard         | 1        |

---

## ⚙️ How It Works

1. The **TCRT5000 IR sensor** measures reflectivity based on the sample.
2. Analog values are read and converted to voltage (`0–5V`).
3. A simulated **glucose level** is calculated using:
glucose = (voltage * 100) + 70


4. Glucose values are capped between 70 mg/dL and 400 mg/dL.
5. Classification:
- **< 140 mg/dL** → Normal
- **140–199 mg/dL** → Prediabetes
- **≥ 200 mg/dL** → Diabetes
6. The data is:
- Shown on the I2C LCD
- Transmitted over Bluetooth via **HC-05** to a serial terminal (e.g., Serial Monitor or Bluetooth Terminal app)

---

## 🖥️ Sample Output (Serial Monitor)

Glucose: 132.4 mg/dL | Status: Normal Glucose: 176.2 mg/dL | Status: Prediabetes Glucose: 234.8 mg/dL | Status: Diabetes


---

## 📋 Connections

| TCRT5000        | Arduino     |
|----------------|-------------|
| VCC            | 5V          |
| GND            | GND         |
| OUT            | A1          |

| I2C LCD        | Arduino     |
|----------------|-------------|
| VCC            | 5V          |
| GND            | GND         |
| SDA            | A4          |
| SCL            | A5          |

| HC-05 Module   | Arduino     |
|----------------|-------------|
| VCC            | 5V          |
| GND            | GND         |
| TX             | RX (via divider) |
| RX             | TX          |

> ⚠️ **Note:** Use a voltage divider for HC-05 RX to protect it from 5V Arduino TX pin.

---

## 📦 Requirements

- Arduino IDE
- `LiquidCrystal_I2C` library (Install via Library Manager)
- Compatible Bluetooth terminal app (for Android/iOS)

---

## 📈 Future Enhancements

- Calibrate with real glucose sensors for accuracy
- Integrate with a mobile app for user tracking
- Store data in SD card or transmit to cloud

---

## 🧑‍💻 Author

**Aryan Kodan**  
[LinkedIn](#) | [Email](mailto:aryankodan327@gmail.com)

---

## 📝 Disclaimer

> This is a simulated model for educational/demo purposes and **not a medical device**. Glucose levels are derived from synthetic formulas and are not suitable for real medical diagnosis.





