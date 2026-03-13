# 7-Segment Up/Down Counter

## 📌 Project Overview
This project is a digital up/down counter built with an Arduino Uno. It uses two tactile push buttons to increment and decrement a single-digit 7-segment display between the values of 0 and 9. It demonstrates fundamental concepts of embedded C++ logic, GPIO pin configuration, and hardware state management.

## 🛠️ Hardware Components
* 1x Arduino Uno
* 1x 1-Digit 7-Segment Display (Common Cathode/Anode)
* 2x Tactile Push Buttons (4-pin)
* 7x 220Ω Resistors
* 1x Breadboard
* Jumper Wires

## ⚙️ How It Works
* **Initialization:** The 7-segment display starts at `0`.
* **Increment (`++`):** Pressing the first button increases the counter. If the counter exceeds `9`, it resets to `0`.
* **Decrement (`--`):** Pressing the second button decreases the counter. If the counter drops below `0`, it wraps around to `9`.
* **Internal Pull-Ups:** The buttons are wired to ground and utilize the Arduino's internal pull-up resistors (`INPUT_PULLUP`), ensuring stable `HIGH` states when unpressed and `LOW` states when triggered.

## 📂 Circuit Wiring
![Circuit Diagram](/docs/7-Segment-UpDown-Counter/one-digit_seven_segment_display_counter.png)

---
*This project is part of my ongoing embedded systems and mechatronics portfolio.*
