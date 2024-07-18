# Green-House-Monitor
This project aims to create an automated greenhouse monitoring system using an Arduino Uno. The system will monitor temperature, humidity, and soil moisture levels, and automatically water the plants when necessary.
# Greenhouse Monitor with Arduino Uno

## Overview
This project aims to create an automated greenhouse monitoring system using an Arduino Uno. The system will monitor temperature, humidity, and soil moisture levels, and automatically water the plants when necessary.

## Components
- Arduino Uno
- DHT11 Sensor (Temperature and Humidity)
- Soil Moisture Sensor
- Water Pump
- Relay Module (to control the water pump)
- Breadboard and Jumper Wires
- Power Supply (for the water pump)

## Circuit Diagram
(Insert Circuit Diagram Here)

## Setup Instructions
1. **Connect the DHT11 Sensor:**
   - VCC to 5V on Arduino
   - GND to GND on Arduino
   - Data pin to Digital Pin 2 on Arduino

2. **Connect the Soil Moisture Sensor:**
   - VCC to 5V on Arduino
   - GND to GND on Arduino
   - Analog pin to A0 on Arduino

3. **Connect the Relay Module:**
   - VCC to 5V on Arduino
   - GND to GND on Arduino
   - IN to Digital Pin 7 on Arduino

4. **Connect the Water Pump:**
   - Connect the pump to the relay module according to the relay module's specifications.
