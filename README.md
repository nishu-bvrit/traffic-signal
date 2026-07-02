# 🚦 Arduino Traffic Light System

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-Uno-00979D?style=for-the-badge&logo=arduino&logoColor=white">
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white">
  <img src="https://img.shields.io/badge/Platform-Arduino_IDE-1E1E1E?style=for-the-badge">
  <img src="https://img.shields.io/badge/Project-Beginner-success?style=for-the-badge">
</p>

<p align="center">
  <b>A simple Arduino Uno project that simulates a real-world traffic signal using three LEDs.</b>
</p>

---

## 📖 About the Project

This project demonstrates the basic working of a **traffic light system** using an **Arduino Uno** and three LEDs.

The LEDs operate in the following sequence:

🔴 Red → 🟢 Green → 🟡 Yellow → Repeat

It is an excellent beginner project to learn:

- Arduino Programming
- Digital Output
- Timing using `delay()`
- Circuit Connections
- LED Control

---

## ✨ Features

- 🚦 Realistic traffic light sequence
- ⚡ Beginner-friendly Arduino code
- 🔌 Easy hardware setup
- 📚 Great for students and Arduino beginners
- 🛠️ Uses only basic electronic components

---

# 🛠️ Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| 220Ω Resistors | 3 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

# 🔌 Circuit Connections

| Arduino Pin | Component |
|-------------|-----------|
| D2 | 🔴 Red LED |
| D3 | 🟡 Yellow LED |
| D4 | 🟢 Green LED |
| GND | LED Negative Terminal (through resistor) |

---

# 🚦 Working

```text
START
  │
  ▼
🔴 Red ON (5 sec)
  │
  ▼
🟢 Green ON (5 sec)
  │
  ▼
🟡 Yellow ON (2 sec)
  │
  ▼
Repeat Forever
```

---

# 📂 Project Structure

```
Traffic-Light-Arduino/
│
├── Traffic_Light.ino
├── README.md
└── circuit_diagram.png
```

---

# 💻 Arduino Code Logic

```cpp
Red ON      → Wait 5 seconds
Green ON    → Wait 5 seconds
Yellow ON   → Wait 2 seconds

Repeat...
```

---

# ▶️ How to Run

### 1. Connect the LEDs

Follow the circuit diagram.

### 2. Open Arduino IDE

Open the `.ino` file.

### 3. Select Board

```
Tools → Board → Arduino Uno
```

### 4. Select COM Port

```
Tools → Port → COMx
```

### 5. Upload

Click the **Upload** button.

---

# 📸 Output

```
🔴 ON
      ↓
🟢 ON
      ↓
🟡 ON
      ↓
Repeat...
```

---

# 🚀 Future Improvements

- 🚶 Pedestrian Crossing Button
- 🚗 IR Sensor-based Smart Traffic System
- ⏱️ Countdown Timer Display
- 📡 IoT Traffic Monitoring
- 🚨 Emergency Vehicle Priority

---

# 🧠 What You'll Learn

- Arduino Basics
- pinMode()
- digitalWrite()
- delay()
- LED Interfacing
- Breadboard Connections

---

# 📷 Circuit Diagram

> Add your circuit image here.

```
images/circuit.png
```

or

Drag and drop the image into the README.

---

# 🤝 Contributing

Contributions are welcome!

1. Fork this repository
2. Create a new branch
3. Commit your changes
4. Push to your branch
5. Open a Pull Request

---

# ⭐ If you like this project

Give this repository a ⭐ on GitHub!

It helps others discover the project.

---

# 📜 License

This project is licensed under the **MIT License**.

Feel free to use, modify, and share.

---

<p align="center">
Made with ❤️ using Arduino Uno
</p>
