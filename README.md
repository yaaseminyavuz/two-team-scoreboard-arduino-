# 🏆 Two Team Scoreboard (Arduino Project)

## 📌 Overview
This project implements a digital scoreboard system designed for sports games. It tracks and displays the scores of two teams in real time using an Arduino-based embedded system.

The system integrates input controls, real-time processing, and visual output using a 7-segment display driven by the MAX7219 module.

---

## 🎯 Objectives
- To design a real-time scoreboard system
- To apply embedded system principles
- To demonstrate microprocessor-based control logic
- To simulate a real-world sports scoreboard

---

## ⚙️ Features
- ✅ Two independent team score counters (Team A & Team B)
- ✅ Button-controlled score increment
- ✅ Countdown game timer
- ✅ Buzzer alert when time expires
- ✅ Automatic score freeze after game ends
- ✅ Winner indication via blinking display
- ✅ Reset functionality

---

## 🧩 System Architecture

### 🔹 Input Layer
- Push buttons for:
  - Team A score increment
  - Team B score increment
  - System reset

### 🔹 Processing Layer
- Arduino Uno microcontroller
- Handles:
  - Score calculations
  - Timer management using `millis()`
  - Game state control (active / game over)

### 🔹 Output Layer
- 7-segment display (via MAX7219)
- Buzzer for audio feedback

---

## ⏱ Timer Implementation
The countdown timer is implemented using the `millis()` function instead of `delay()`, allowing non-blocking execution and real-time responsiveness.

---

## 🔔 Game Over Logic
When the timer reaches zero:
- The game state switches to **Game Over**
- Scores are frozen (no further updates allowed)
- Buzzer generates an alert sound
- The winning team's score blinks on the display

---

## 🔌 Hardware Components
- Arduino Uno
- MAX7219 7-segment display module (4-digit)
- Push buttons (x3)
- Buzzer
- Breadboard
- Jumper wires

---

## 🔗 Pin Configuration

| Component | Arduino Pin |
|----------|------------|
| Button A | 2 |
| Button B | 3 |
| Reset    | 4 |
| Buzzer   | 6 |
| MAX7219 DIN | 11 |
| MAX7219 CS  | 10 |
| MAX7219 CLK | 13 |

---

## 🖥 Software
- Arduino IDE (C/C++)
- LedControl Library for MAX7219

---

## 📸 Circuit Diagram
coming soon 

---

## 🚀 How to Run the Project
1. Connect all components according to the circuit diagram
2. Upload the `scoreboard.ino` code to Arduino
3. Power the system
4. Use buttons to control scores
5. Observe timer countdown and game behavior

---

## 🧠 Key Concepts Demonstrated
- Embedded systems design
- Digital input/output handling
- Real-time programming
- State-based system control
- Hardware-software integration

---

## 🔮 Future Improvements
- Wireless score control (Bluetooth / Wi-Fi)
- Mobile app integration
- Period tracking system (Q1–Q4)
- Larger LED display support
- Sound effects and animations

---

## 👩‍💻 Author
Yasemin Yavuz

---

## 📌 Notes
This project was developed as part of a Digital Systems / Microprocessors course module.
