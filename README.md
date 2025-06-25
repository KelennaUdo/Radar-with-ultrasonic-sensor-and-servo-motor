# Radar with Ultrasonic Sensor and Servo Motor

This project implements a simple radar system using an Arduino Uno, an ultrasonic distance sensor, and a servo motor. The radar scans an area by rotating the ultrasonic sensor with the servo and visualizes detected objects on a Processing-based display.

## Features

- Scans from 15° to 165° and back using a servo motor
- Measures distance to objects using an ultrasonic sensor
- Activates a buzzer when an object is within 40 cm
- Sends angle and distance data over serial to a PC
- Real-time radar visualization using Processing

## Hardware Requirements

- Arduino Uno
- Ultrasonic sensor (e.g., HC-SR04)
- Servo motor
- Buzzer
- Jumper wires and breadboard

## Software Requirements

- [PlatformIO](https://platformio.org/) (for building and uploading Arduino code)
- [Processing](https://processing.org/) (for radar visualization)
- Servo library for Arduino (installed automatically via PlatformIO)

## File Structure

- [`src/main.cpp`](src/main.cpp): Arduino code for controlling the radar system
- [`src/display_program/display_program.pde`](src/display_program/display_program.pde): Processing sketch for radar visualization
- [`platformio.ini`](platformio.ini): PlatformIO project configuration

## Usage

1. **Wiring:** Connect the ultrasonic sensor, servo, and buzzer to the Arduino as defined in `main.cpp`.
2. **Build and Upload:** Use PlatformIO to upload the code to your Arduino Uno.
3. **Run Visualization:** Open `display_program.pde` in Processing, set the correct serial port (e.g., `"COM5"`), and run the sketch.
4. **View Radar:** The Processing window will display a radar-like visualization of detected objects.

## Customization

- Change the scanning range or speed by modifying the loop in [`main.cpp`](src/main.cpp).
- Adjust the serial port in [`display_program.pde`](src/display_program/display_program.pde) to match your system.

## License

This project is for educational purposes.

---

*Inspired by Arduino radar tutorials and adapted for PlatformIO and Processing.*