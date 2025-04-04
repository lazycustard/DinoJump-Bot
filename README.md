# 🦖 DinoJump Bot

An automated jumper for the Google Chrome Dino game using an Arduino, a light sensor, and a servo motor. This project detects obstacles and triggers the jump action, letting your Dino survive endlessly!

## 📋 Features
- Automatic jump detection based on obstacle proximity.
- Adjustable threshold for sensor sensitivity.
- Simple and lightweight Arduino-based setup.

## 🛠️ Components Used
- Arduino Uno 
- Servo Motor (e.g., SG90)  
- Light Sensor (here used LDR)  
- Resistor (10kΩ for LDR voltage divider)  
- Jumper Wires  
- Breadboard  

## ⚡ Circuit Diagram
1. **LDR Sensor:**  
   - Connect one end to **5V** and the other to **A0** with a **10kΩ** resistor to **GND**.  
2. **Servo Motor:**  
   - **Signal Pin** → Arduino **Pin 9**  
   - **VCC** → **5V**  
   - **GND** → **GND**

## ⚡ Working Mechanism  
The **LDR (Light Dependent Resistor)** is positioned directly over the Dino in the game. Since the game background is a constant light shade and obstacles like cacti and birds are darker, the LDR detects a sudden drop in light intensity when an obstacle approaches.  

The **Arduino processes this data** and determines if a jump is required. If the detected brightness drops below a set threshold (indicating an obstacle), the **servo motor is triggered to press the jump key**, making the Dino leap over the obstacle.  

## 🚀 Future Advancements
- **Obstacle Differentiation:** Improve detection to distinguish between birds and cacti, enabling ducking or jumping as needed.  
- **Speed Adaptation:** Integrate dynamic threshold adjustments to match increasing game speed.
- **Wireless Control:** Implement Bluetooth or Wi-Fi for remote calibration and control.  
- **Compact Design:** Optimize the setup into a single PCB for portability and neatness.

## ⚠️ Possible Errors
- **False Positives/Negatives:** Changes in ambient lighting can affect LDR readings, leading to missed or unintended jumps.  
- **Servo Calibration Issues:** Incorrect servo angles might prevent proper key presses—recalibrate if necessary.  
- **Sensor Placement Errors:** Misaligned LDR positioning can result in delayed or missed obstacle detection.  
- **Threshold Misconfiguration:** Setting the detection threshold too high or low can affect jump accuracy—fine-tuning is essential.

## 📄 License
This project is open-source and free to use under the [MIT License](https://opensource.org/licenses/MIT).
