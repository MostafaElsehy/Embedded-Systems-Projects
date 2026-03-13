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

## 💡 Key Learnings & Troubleshooting
During the hardware assembly, I encountered an issue where the counter would trigger continuously on its own. Through systematic troubleshooting, I identified two core hardware concepts:
1. **4-Pin Tactile Switch Internals:** Breadboard push buttons have four legs that are permanently connected in pairs. Placing the button incorrectly on the breadboard created a permanent short to ground. Rotating the button and wiring across the diagonal legs resolved the false inputs.
2. **Pin 13 LED Interference:** Initially using Pin 13 for an input button caused floating states due to the Arduino's built-in LED resistor interfering with the `INPUT_PULLUP` logic. Migrating the input to an isolated digital pin ensured clean logic reads.

## 📂 Circuit Wiring
![Circuit Diagram](/docs/7-Segment-UpDown-Counter/one-digit_seven_segment_display_counter.png)

---
*This project is part of my ongoing embedded systems and mechatronics portfolio.*
