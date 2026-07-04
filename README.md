# 🚦 Intelligent Dual Traffic Light Control System Using Arduino

## 📌 Overview

This project implements an **Intelligent Dual Traffic Light Control System** using an **Arduino Uno** simulated in **Tinkercad**. Unlike conventional traffic lights that operate on fixed timing, this system intelligently adjusts signal timings based on:

- 🚗 Vehicle detection using an HC-SR04 Ultrasonic Sensor
- 🌞🌙 Day/Night detection using an LDR (Light Dependent Resistor)

The project demonstrates how embedded systems and sensors can improve traffic efficiency, reduce waiting time, and simulate smart city traffic management.

---

## 📖 Abstract

The Intelligent Dual Traffic Light Control System enhances a basic traffic signal by integrating an ultrasonic sensor for vehicle detection and an LDR sensor for ambient light sensing.

During the daytime, traffic lights remain green for longer durations to accommodate heavier traffic. During nighttime, green light duration is reduced because traffic density is generally lower.

The ultrasonic sensor detects nearby vehicles and provides additional green signal time whenever traffic is detected, making the system adaptive instead of fixed-time.

---

# 🎯 Objectives

- Design a dual traffic light system using Arduino Uno.
- Implement adaptive traffic signal control.
- Detect ambient light using an LDR.
- Detect vehicle presence using an ultrasonic sensor.
- Improve traffic flow by dynamically adjusting green light timing.

---

# 🛠 Components Used

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| LDR Sensor | 1 |
| Red LEDs | 2 |
| Yellow LEDs | 2 |
| Green LEDs | 2 |
| 220Ω Resistors | 6 |
| 10kΩ Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Multiple |

---

# 🔌 Circuit Connections

## Lane 1 LEDs

| LED | Arduino Pin |
|------|-------------|
| Red | D2 |
| Yellow | D3 |
| Green | D4 |

---

## Lane 2 LEDs

| LED | Arduino Pin |
|------|-------------|
| Red | D5 |
| Yellow | D6 |
| Green | D7 |

---

## HC-SR04 Ultrasonic Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

---

## LDR Sensor

| Connection | Arduino |
|------------|----------|
| One terminal | 5V |
| Other terminal | A0 |
| 10kΩ resistor | GND |

The LDR is connected as a voltage divider.

---

# ⚙️ Working Principle

## ☀️ Day Mode

When the LDR detects high light intensity:

- Longer green light duration.
- Suitable for heavy daytime traffic.

---

## 🌙 Night Mode

When ambient light is low:

- Green light duration becomes shorter.
- Saves time and improves efficiency.

---

## 🚗 Vehicle Detection

The HC-SR04 continuously measures distance.

If a vehicle is detected within **20 cm**:

- Lane 1 receives additional green time.
- Lane 2 remains at red.
- Waiting time is reduced.

---

# 💻 Arduino Program

The complete Arduino sketch is available in:

```
Traffic_Light_System.ino
```

---

# ▶️ Simulation

The project is designed and tested using **Tinkercad Circuits**.

Features demonstrated:

- Dual traffic lights
- Vehicle detection
- Day/Night mode
- Automatic signal timing

---

# ✅ Advantages

- Adaptive traffic management
- Reduced congestion
- Lower waiting time
- Energy-efficient operation
- Low-cost implementation
- Easy to understand for beginners

---

# 🌍 Applications

- Smart city traffic systems
- Highway intersections
- Parking management
- Embedded systems education
- IoT projects
- Automated road safety systems

---

# ⚠️ Limitations

- Designed for simulation only.
- Uses only one ultrasonic sensor.
- Cannot count the exact number of vehicles.
- Environmental conditions may affect sensor readings.

---

# 🚀 Future Improvements

- Multiple ultrasonic sensors
- Vehicle counting algorithm
- Emergency vehicle priority
- Pedestrian crossing button
- IoT monitoring
- Wi-Fi/GSM connectivity
- LCD countdown timer
- AI-based traffic optimization

---

# 📚 Learning Outcomes

Through this project, students learn:

- Arduino programming
- Sensor interfacing
- Traffic light automation
- Embedded system design
- Tinkercad simulation
- Real-time decision making

---

# 📷 Output

Add screenshots of your Tinkercad simulation here.

Example:

```
images/
    circuit.png
    simulation.png
```

---

# 🏗 Developed By

**Rabeea Anjum**

**Roll No:** 23-CSE-09

Department of Computer Systems Engineering

---

# 📄 License

This project is developed for educational purposes.
