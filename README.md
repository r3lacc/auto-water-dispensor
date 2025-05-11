# Auto Water Dispenser 🚰

This Arduino project uses an ultrasonic sensor and a servo motor to detect when a cup is near and automatically dispense water.

## How It Works

- The **HC-SR04 ultrasonic sensor** detects a cup when it's within **10 cm**.
- When the sensor detects the cup, the **servo motor** rotates, which can be used to open a water valve (or another mechanism).
- After the servo moves, it resets after a short delay and waits for the next cup detection.

## Components

- **Arduino Uno** (or any compatible Arduino board)
- **HC-SR04 Ultrasonic Sensor**
- **Servo Motor**
- **Breadboard** (optional)
- **Jumper Wires**
- Optional: **PCB** for cleaner wiring (if using a custom PCB)

## Wiring Diagram
*(Insert your wiring diagram or photo here)*

## Files

- `waterdispensor.ino`: Main Arduino sketch that controls the servo and sensor.

## Instructions

1. Connect the **HC-SR04 sensor** to the Arduino:
   - VCC to 5V
   - GND to Ground
   - TRIG to pin 9
   - ECHO to pin 10
2. Connect the **servo motor** to the Arduino:
   - The servo's control pin should go to pin 8 (or any other PWM pin)
   - VCC to 5V
   - GND to Ground
3. Upload the `waterdispensor.ino` sketch to your Arduino.
4. Power up your Arduino and place a cup near the sensor. The servo will move and open the valve to dispense water.

## Troubleshooting

- Ensure the **HC-SR04 sensor** is correctly wired and the trigger/echo pins match in the code.
- Check that the **servo motor** is receiving enough power (may need a separate power supply depending on the motor's size).

---

## License

This project is open-source. Feel free to use, modify, and share.