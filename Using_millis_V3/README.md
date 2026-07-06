# ESP32 Traffic Light Project - Version 3

## Overview

This is the third version of my ESP32 Traffic Light project.

This version replaces the blocking `delay()` function with the `millis()` function to implement non-blocking timing. The traffic light sequence remains the same, but the ESP32 is now free to perform other tasks while keeping track of time, making the program more suitable for real-world embedded applications.

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

The sequence repeats continuously using non-blocking timing.

---

## Concepts Learned

- Non-blocking Programming
- `millis()`
- State Tracking
- `switch` Statements
- User-defined Functions
- Code Modularity
- Event-driven Programming

---

## Improvements Over Version 2

- Replaced `delay()` with `millis()` for non-blocking timing.
- Improved program responsiveness.
- Maintained modular code by keeping separate functions for each traffic light state.
- Prepared the project for adding buttons, sensors, displays, and communication modules in future versions.

---

## Challenges Faced

- Understanding non-blocking timing using `millis()`.
- Tracking elapsed time without using `delay()`.
- Managing traffic light states while keeping the main loop continuously running.

---

## Future Improvements

- Add a pedestrian crossing button.
- Display a countdown timer on an OLED display.
- Implement a Finite State Machine (FSM).
- Expand the project into a realistic smart traffic light controller.

---

## Images

The working of the project is the same as in Version 1. The code is the only thing being optimised.