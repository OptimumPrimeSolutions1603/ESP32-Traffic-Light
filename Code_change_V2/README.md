# ESP32 Traffic Light Project - Version 2

## Overview

This is the second version of my ESP32 Traffic Light project.

This version refactors the traffic light program by organizing the code into separate functions for each traffic light state. While the traffic light behavior remains the same as Version 1, the code is now more modular, readable, and easier to maintain.

---

## Components Used

- ESP32 Development Board
- Breadboard
- Red LED
- Yellow LED
- Green LED
- 3 × 220Ω Resistors
- Jumper Wires
- USB Cable

---

## Circuit Connections

- Red LED → GPIO 4
- Yellow LED → GPIO 5
- Green LED → GPIO 18
- All LED cathodes → GND
- Each LED connected in series with a 220Ω resistor

---

## Traffic Light Sequence

| Signal | Duration |
| :----- | -------: |
| 🔴 Red | 5 seconds |
| 🟢 Green | 5 seconds |
| 🟡 Yellow | 2 seconds |

The sequence repeats continuously.

---

## Concepts Learned

- User-defined Functions
- Modular Programming
- Code Reusability
- Function Calls
- `pinMode()`
- `digitalWrite()`
- `delay()`
- Improved Code Organization

---

## Improvements Over Version 1

- Refactored the program into dedicated functions for each traffic light state.
- Improved code readability and maintainability.
- Reduced repetitive code inside the `loop()` function.
- Made the program easier to expand with additional features in future versions.

---

## Challenges Faced

- Breaking the program into reusable functions without changing its behavior.
- Organizing the code to improve readability.
- Ensuring each traffic light state was handled correctly within its respective function.

---

## Future Improvements

- Replace `delay()` with `millis()` for non-blocking timing.
- Add a pedestrian crossing button.
- Implement a Finite State Machine (FSM).
- Expand the project into a realistic traffic light controller.

---
