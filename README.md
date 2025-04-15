# 🍹 Arduino Liquid Dispenser

A smart liquid dispenser that lets you choose from 4 different drinks at the press of a button. Built with an Arduino, this project uses 4 pumps, 4 buttons, and an LCD display to create an interactive and stylish drink-serving experience. It also features a distance sensor to prevent overflow by detecting when a glass is not in place or full.

## 🛠 Features

- **4-Drink Selection** via individual buttons  
- **LCD Display** shows the name/flavor of each selected drink  
- **Ultrasonic Distance Sensor** prevents overflow and ensures glass is present  
- **4 Liquid Pumps** for precise dispensing  
- **Wooden Case** for a clean and elegant finish  

## 🧰 Components

- Arduino Uno or Wemos -> feature: (mobile app)
- 4x Liquid pumps  
- 4x Push buttons  
- 1x 16x2 or 20x4 LCD Display (I2C recommended)  
- 1x Ultrasonic sensor (HC-SR04)  
- Relay module or MOSFETs (for pump control)  
- Power supply (12V for pumps)  
- Custom wooden enclosure  

## 📋 How It Works

1. User places a glass under the nozzle.
2. The ultrasonic sensor detects the glass.
3. User presses a button to select a drink.
4. LCD displays the selected drink name.
5. The corresponding pump activates and dispenses the liquid.
6. If no glass is detected, the system blocks dispensing to avoid spills.

## 📦 Coming Soon

- Mobile App to control amount of fluids in storage
- RGB lighting effects  
 
