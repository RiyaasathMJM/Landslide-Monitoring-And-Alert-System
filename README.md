# Landslide-Monitoring-And-Alert-System
📌 Project Overview

This project is an IoT-based Landslide Monitoring System designed to detect early signs of landslides by monitoring soil moisture, ground vibrations, and temperature.

The system uses an ATmega30 microcontroller to process sensor data, an ESP32 module to send data to the cloud (ThingsBoard), and a buzzer with buffer circuit to provide instant local alerts.

Real-time monitoring, historical data storage, and alerts help prevent landslide-related damages.


🧩 Hardware Components

ATmega30 Microcontroller – central controller

ESP32 Wi-Fi Module – cloud communication

Sensors:

Soil Moisture Sensor

Vibration Sensor

Temperature Sensor

Buzzer + Buffer Circuit – audible alert system

Power Supply & Connectors

🔧 Software Components

Arduino IDE / Embedded C – programming ATmega30 and ESP32

ThingsBoard Cloud – IoT data storage and visualization

MQTT / HTTP Protocols – data transmission

Optional: Python / Node-RED – advanced data processing (if required)


🛠️ Working Principle

Sensor Data Collection: Soil moisture, vibration, and temperature sensors continuously monitor the environment.

Data Processing: ATmega30 reads sensor data, converts analog signals to digital, and checks against thresholds.

Local Alerts: If unsafe conditions are detected, the buzzer is activated via the buffer circuit.

Cloud Transmission: ESP32 sends the data to ThingsBoard Cloud using MQTT in JSON format.

Cloud Monitoring: Sensor readings are displayed on dashboards in real-time; alerts and historical data are stored for analysis.


🚀 Features

Real-time monitoring of landslide-prone areas

Local audible alerts via buzzer

Cloud-based data storage and visualization

Historical data logging for analysis

Threshold-based alert system
