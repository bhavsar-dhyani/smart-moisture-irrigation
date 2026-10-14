# Smart Moisture Irrigation System

🏆 **First Prize Winner** at [Project Exhibition 2025]

An automatic irrigation system that measures soil moisture and switches a water pump on or off without any manual work.

## How It Works
1. A soil moisture sensor reads how wet the soil is.
2. The code converts the reading into a percentage (100% = wet, 0% = dry).
3. When the soil is dry, the pump is switched ON to water the plants.
4. When the soil is wet enough, the pump is switched OFF.

## Hardware Used
- NodeMCU (ESP8266)
- Soil moisture sensor
- Relay module
- Water pump
- Jumper wires and power supply

## Software
- Arduino IDE
- C/C++ (Arduino)

## Files
- `smart_moist.ino`: the main Arduino code

## How to Run
1. Connect the hardware as per the circuit
2. Open `smart_moist.ino` in Arduino IDE
3. Select the board **NodeMCU 1.0 (ESP-12E Module)** and the correct port
4. Upload the code and open the Serial Monitor at 9600 baud

## Author
Dhyani Bhavsar
