# 🩺 Inexpensive Blood Glucometer – Arduino & IoT-Based System

This project demonstrates a **low-cost, non-invasive blood glucose monitoring system** using **Arduino Uno**, **TCRT5000 IR sensor**, **HC-05 Bluetooth**, **ESP8266 Wi-Fi module**, and a **16x2 I2C LCD display**. It simulates glucose estimation and displays health status, making it a great prototype for biomedical and IoT applications in affordable healthcare.

---

## 🔧 Features

- 📈 **Real-time glucose level estimation** using analog IR sensor input
- 🧠 **Health status classification**: Normal / Prediabetes / Diabetes
- 🖥️ **LCD-based display** of glucose readings and health status
- 📡 **Wireless communication via Bluetooth (HC-05) and Wi-Fi (ESP8266)** for mobile or cloud-based access
- 📲 **Serial Monitor and Bluetooth transmission** for testing and remote display
- ☁️ **IoT-ready architecture** for future cloud integration

---

## 🧩 Components Used

- Arduino Uno
- TCRT5000 IR Sensor
- I2C LCD (16x2)
- HC-05 Bluetooth Module
- **ESP8266 Wi-Fi Module**
- Jumper wires, breadboard, USB cable

---

## 🔬 How It Works

1. The IR sensor (TCRT5000) reads analog reflectance values from skin/blood capillaries.
2. Sensor data is converted to voltage and mapped to simulated **glucose concentration (mg/dL)**.
3. Glucose levels are classified:
   - `< 140 mg/dL`: Normal
   - `140–199 mg/dL`: Prediabetes
   - `≥ 200 mg/dL`: Diabetes
4. Readings are displayed on the LCD, sent to the **Serial Monitor**, and wirelessly transmitted via **Bluetooth** and **Wi-Fi** for IoT expansion.

---

## 📟 Output Sample

```bash
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





