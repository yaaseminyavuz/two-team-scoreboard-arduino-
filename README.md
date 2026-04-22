
# Two Team Scoreboard (Arduino Project)

## 📌 Overview
This project is a digital scoreboard system designed to track the scores of two teams in a sports game. It is implemented using Arduino and a 7-segment display controlled by MAX7219.

---

## 🎯 Features
- Two independent team score counters
- Button-controlled score increment
- Game timer with countdown
- Buzzer alert when time is up
- Score freeze at game end
- Winner indication with blinking display

---

## 🔧 Hardware Components
- Arduino Uno
- MAX7219 7-segment display
- Push buttons (x3)
- Buzzer
- Breadboard and jumper wires

---

## ⚙️ System Design

### Input
- Buttons for Team A, Team B, and Reset

### Processing
- Arduino processes inputs and updates scores

### Output
- Scores displayed on 7-segment display
- Buzzer for game end alert

---

## ⏱ Timer Logic
The system uses the `millis()` function to implement a non-blocking countdown timer.

---

## 🔔 Game Over Behavior
- Timer reaches zero
- Scores are frozen
- Buzzer activates
- Winner team blinks on display

---

## 🧠 Technologies Used
- Arduino (C/C++)
- MAX7219 LED driver
- Embedded Systems Design

---


## 🚀 Future Improvements
- Wireless control
- Mobile app integration
- Period tracking (Q1–Q4)

---

## 👩‍💻 Author
Yasemin Yavuz
