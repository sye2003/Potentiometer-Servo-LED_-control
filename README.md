# 🎛️ Potentiometer-Controlled Servo and LED

This project demonstrates how to control a **servo motor's angle** and an **LED's brightness** using a **single potentiometer** as input.

As you rotate the potentiometer:
- The **servo motor** rotates between 0° and 180°.
- The **LED brightness** adjusts from dim to bright using PWM.

## 🧰 Components Used

- Arduino Uno (or compatible)
- Servo Motor
- LED
- Potentiometer (10kΩ)
- 220Ω Resistor
- Breadboard and jumper wires

## 🔌 Wiring

| Component       | Arduino Pin    |
|----------------|----------------|
| Potentiometer   | A0 (middle pin) |
| Servo Motor     | D9              |
| LED (+ via resistor) | D6          |
| LED (-)         | GND             |
| Pot side pins   | 5V and GND      |

## 🧠 How It Works

1. The potentiometer provides an analog value (0–1023).
2. The servo angle is mapped from that value (0–180 degrees).
3. The LED brightness is mapped using PWM (0–255).
4. As you rotate the knob, both outputs respond in real time.

