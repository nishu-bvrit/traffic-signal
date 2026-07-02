<div align="center">

# 🚦 Traffic Light Control System

### *A Simple Arduino Uno Project Simulating a Real Traffic Signal*

<img src="https://img.shields.io/badge/Arduino-Uno-00979D?style=for-the-badge&logo=arduino&logoColor=white">
<img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white">
<img src="https://img.shields.io/badge/Platform-Arduino_IDE-success?style=for-the-badge">
<img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge">
<img src="https://img.shields.io/badge/Made%20With-❤️-red?style=for-the-badge">

---

*"Learning Embedded Systems, one LED at a time."*

</div>

---

# ✨ Overview

This project recreates the operation of a **traffic signal** using an **Arduino Uno** and three LEDs.

It demonstrates how digital outputs can be used to control LEDs in a timed sequence, making it an excellent beginner project for learning **embedded systems** and **Arduino programming**.

---

# 🚥 Signal Flow

```text
┌──────────────┐
│ 🔴 RED       │
│   5 Seconds  │
└──────┬───────┘
       │
       ▼
┌──────────────┐
│ 🟡 YELLOW    │
│   3 Seconds  │
└──────┬───────┘
       │
       ▼
┌──────────────┐
│ 🟢 GREEN     │
│   5 Seconds  │
└──────┬───────┘
       │
       ▼
    🔁 Repeat Forever
```

---

# 🛠 Hardware Used

| 🔧 Component | Quantity |
|--------------|:-------:|
| Arduino Uno | 1 |
| Breadboard | 1 |
| 🔴 Red LED | 1 |
| 🟡 Yellow LED | 1 |
| 🟢 Green LED | 1 |
| 220Ω Resistors | 3 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

# 🔌 Pin Configuration

| Arduino Pin | LED |
|:------------|:----|
| **D10** | 🔴 Red |
| **D9** | 🟡 Yellow |
| **D11** | 🟢 Green |

> 💡 **Tip:** Always connect LEDs through **220Ω resistors** to prevent damage.

---

# ⚡ How It Works

```text
 Power ON
    │
    ▼
🔴 Stop Vehicles
    │
    ▼
🟡 Prepare to Move
    │
    ▼
🟢 Vehicles Go
    │
    ▼
Repeat...
```

---

# ⏳ Timing Chart

| 🚦 Signal | ⏱ Duration |
|-----------|-----------:|
| 🔴 Red | **5 Seconds** |
| 🟡 Yellow | **3 Seconds** |
| 🟢 Green | **5 Seconds** |

---

# 🧠 Concepts Covered

```text
✓ Arduino Basics

✓ Digital Output

✓ pinMode()

✓ digitalWrite()

✓ delay()

✓ LED Interfacing

✓ Breadboard Connections

✓ Embedded Systems
```

---

# 📁 Project Structure

```text
📦 Traffic-Light-System
│
├── 📄 Traffic_Light.ino
├── 📄 README.md
├── 📄 LICENSE
│
├── 📂 images
│   ├── circuit.png
│   ├── breadboard.jpg
│   └── output.gif
│
└── 📂 assets
    └── banner.png
```

---

# ▶ Getting Started

### ① Clone the Repository

```bash
git clone https://github.com/yourusername/Traffic-Light-System.git
```

### ② Open Arduino IDE

```
Traffic_Light.ino
```

### ③ Select Board

```
Arduino Uno
```

### ④ Select COM Port

```
Tools → Port
```

### ⑤ Upload Code 🚀

Watch the LEDs perform the traffic light sequence.

---

# 📷 Project Gallery

```
🖼 banner.png

🔌 circuit.png

💡 breadboard.jpg

🎥 output.gif
```

*(Add your images inside the `images` folder for a more attractive repository.)*

---

# 🚀 Future Enhancements

```
🚶 Pedestrian Crossing Button

🚗 IR Vehicle Detection

📟 LCD Countdown Timer

🌐 IoT Monitoring

🚑 Emergency Vehicle Priority

☀ Automatic Day/Night Mode
```

---

# 🌟 Why This Project?

✔ Beginner Friendly

✔ Easy to Build

✔ Helps Learn Arduino Programming

✔ Introduces Embedded Systems

✔ Great for ECE Students

✔ Perfect First GitHub Project

---

# 🤝 Contributions

Pull Requests are always welcome!

If you have ideas to improve this project, feel free to fork the repository and submit your enhancements.

---

<div align="center">

## ⭐ If you like this project, don't forget to Star the Repository!

### 🚦 Happy Coding!

Made with ❤️ using Arduino Uno

</div>
