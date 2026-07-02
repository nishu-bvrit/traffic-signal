<div align="center">

# 🚦 Smart Traffic Light System using Arduino Uno

<img src="https://img.shields.io/badge/Arduino-Uno-00979D?style=for-the-badge&logo=arduino&logoColor=white"/>
<img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
<img src="https://img.shields.io/badge/Platform-Arduino_IDE-00979D?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Difficulty-Beginner-success?style=for-the-badge"/>
<img src="https://img.shields.io/github/license/YOUR_USERNAME/Traffic-Light-Arduino?style=for-the-badge"/>

### 🚥 Simulating a Real-World Traffic Signal using Arduino Uno and LEDs

*A beginner-friendly embedded systems project demonstrating digital outputs, timing control, and Arduino programming.*

</div>

---

# 📖 Overview

This project implements a **Traffic Light System** using an **Arduino Uno** and three LEDs.

The LEDs switch in the same sequence as a real traffic signal:

```text
🔴 RED (5 sec)
      ↓
🟢 GREEN (5 sec)
      ↓
🟡 YELLOW (3 sec)
      ↓
Repeat Forever...
```

This project is perfect for beginners who are learning:

- Arduino Programming
- Embedded Systems
- LED Interfacing
- Digital Electronics
- Basic Automation

---

# ✨ Features

✅ Simple and Clean Code

✅ Realistic Traffic Light Sequence

✅ Beginner Friendly

✅ Easy Hardware Connections

✅ Low Cost Components

✅ Perfect for ECE Students

---

# 🛠 Components Used

| Component | Quantity |
|------------|---------:|
| Arduino Uno | 1 |
| Breadboard | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| 220Ω Resistor | 3 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

# 🔌 Circuit Connections

| LED | Arduino Pin |
|-----|------------:|
| 🔴 Red | D10 |
| 🟡 Yellow | D9 |
| 🟢 Green | D11 |

> **Note:** Connect each LED through a **220Ω resistor** to GND.

---

# ⚙ Working Principle

The Arduino continuously executes the following sequence:

```text
Start

↓

🔴 RED ON
5 Seconds

↓

🟢 GREEN ON
5 Seconds

↓

🟡 YELLOW ON
3 Seconds

↓

Repeat
```

---

# ⏱ Timing Table

| LED | Duration |
|------|---------:|
| 🔴 Red | 5 Seconds |
| 🟢 Green | 5 Seconds |
| 🟡 Yellow | 3 Seconds |

---

# 💻 Arduino Logic

```cpp
Turn ON Red
Wait 5 Seconds

Turn ON Green
Wait 5 Seconds

Turn ON Yellow
Wait 3 Seconds

Repeat Forever
```

---

# 📂 Project Structure

```
Traffic-Light-System/
│
├── Traffic_Light.ino
├── README.md
├── LICENSE
│
├── images/
│   ├── circuit.png
│   ├── breadboard.png
│   └── output.gif
│
└── assets/
    └── banner.png
```

---

# 🚀 Getting Started

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/YOUR_USERNAME/Traffic-Light-System.git
```

---

### 2️⃣ Open Arduino IDE

Open

```
Traffic_Light.ino
```

---

### 3️⃣ Select Board

```
Tools
   ↓
Board
   ↓
Arduino Uno
```

---

### 4️⃣ Select COM Port

```
Tools
   ↓
Port
   ↓
COMx
```

---

### 5️⃣ Upload

Click the **Upload** button.

Done! 🎉

---

# 📷 Project Preview

## Circuit Diagram

```
📁 images/circuit.png
```

---

## Breadboard Setup

```
📁 images/breadboard.png
```

---

## Output

```
📁 images/output.gif
```

---

# 🧠 Concepts Used

- Arduino Programming
- pinMode()
- digitalWrite()
- delay()
- Digital Output
- Embedded Systems
- LED Interfacing
- Breadboard Wiring

---

# 📈 Future Improvements

- 🚶 Pedestrian Crossing Button

- 🚗 IR Vehicle Detection

- 🚦 Smart Traffic Control

- 📟 LCD Countdown Timer

- 🌐 IoT Traffic Monitoring

- 🚑 Emergency Vehicle Priority

---

# 🤝 Contributing

Contributions are welcome!

1. Fork this repository

2. Create your feature branch

```bash
git checkout -b feature-name
```

3. Commit your changes

```bash
git commit -m "Added new feature"
```

4. Push

```bash
git push origin feature-name
```

5. Open a Pull Request 🚀

---

# ⭐ Show Your Support

If you found this project helpful,

## ⭐ Star this Repository ⭐

It motivates me to build more Arduino and Embedded Systems projects.

---

# 👨‍💻 Author

**Nishant**

ECE Student • Arduino Enthusiast • Embedded Systems Learner

---

# 📜 License

This project is licensed under the MIT License.

---

<div align="center">

## 🚥 Happy Coding! 🚥

Made with ❤️ using Arduino Uno

</div>
