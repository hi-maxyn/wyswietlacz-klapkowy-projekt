# Modułowy wyświetlacz klapkowy

## 📌 Project Overview

This project is a modular split-flap display built using an Arduino Mega, stepper motors, and Hall effect sensors.
The system can display letters by rotating a wheel with multiple flaps, similar to displays used in airports and train stations.

---

## 🎯 Project Goal

The goal of this project was to design and build a working split-flap module that:

* Can find its starting position automatically (homing)
* Rotates precisely to display specific letters
* Can be expanded into multiple modules

---

## 🧰 Components Used

* Arduino Mega
* 28BYJ-48 Stepper Motors
* ULN2003 Driver Boards
* KY-003 Hall Effect Sensors
* Magnets
* External Power Supply
* 3D Printed Parts

---

## ⚙️ How It Works

Each module consists of a rotating wheel with multiple flaps (e.g. 36 positions).

1. **Homing (Calibration)**

   * A magnet and Hall sensor define the starting position
   * The motor rotates until the sensor detects the magnet

2. **Positioning**

   * Each flap corresponds to a fixed angle
   * The motor rotates a specific number of steps to reach a letter

3. **Displaying Text**

   * The program converts letters into positions
   * The motor moves sequentially to display characters

---

## 🔌 Wiring

(Insert image here)

* Stepper motor connected via ULN2003 driver
* Hall sensor connected to digital input
* External power supply used for motors

---

## 💻 Code

The Arduino code is located in:

```
/code/splitflap.ino
```

Main features:

* Homing using Hall sensor
* Step calculation for each flap
* Letter-to-position mapping

---

## 🧪 Example

Example: displaying "HELLO"

* System homes to starting position
* Moves to H → E → L → L → O with delays

---

## 📸 Media

(Add photos or videos here)

---

## ⚠️ Challenges

* Arduino resetting due to power issues → solved with external supply
* Position drift → solved using Hall sensor homing
* Motor synchronization (if multiple modules)

---

## 🚀 Future Improvements

* Add WiFi or Bluetooth control
* Improve speed and noise
* Support multiple modules working together

---

## 📂 Repository Structure

```
code/        → Arduino code  
3d_models/   → STL files  
hardware/    → wiring diagrams  
docs/        → full documentation  
media/       → images and videos  
```

---

## 👨‍💻 Authors

* Your Name
