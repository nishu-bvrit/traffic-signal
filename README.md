# 🚦 Working Principle

The Arduino Uno controls three LEDs to simulate a basic traffic signal.

The system follows this sequence continuously:

```text
          START
             │
             ▼
     🔴 RED Light ON
        ⏱ 5 Seconds
             │
             ▼
    🟡 YELLOW Light ON
        ⏱ 3 Seconds
             │
             ▼
    🟢 GREEN Light ON
        ⏱ 5 Seconds
             │
             ▼
        🔁 REPEAT
```

Each LED turns ON individually while the other two remain OFF, creating a simple traffic light simulation.

---

# ⏱ Traffic Light Timing

| Signal | Duration |
|--------|---------:|
| 🔴 Red | **5 Seconds** |
| 🟡 Yellow | **3 Seconds** |
| 🟢 Green | **5 Seconds** |

---

# 🔌 Circuit Connections

| LED | Arduino Pin |
|-----|------------:|
| 🔴 Red | **D10** |
| 🟡 Yellow | **D9** |
| 🟢 Green | **D11** |

> **Note:** Connect each LED in series with a **220Ω resistor** to protect it from excess current.

---

# 💻 Program Logic

```cpp
Turn ON Red LED
Wait 5 Seconds

Turn ON Yellow LED
Wait 3 Seconds

Turn ON Green LED
Wait 5 Seconds

Repeat Forever
```

---

# 🚀 Output Sequence

```text
🔴 RED
   │
   ▼
🟡 YELLOW
   │
   ▼
🟢 GREEN
   │
   ▼
🔴 RED
   │
   ▼
Repeat Forever...
```
