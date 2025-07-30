# PIR Sensor Project with Arduino Uno and OLED Screen

## Project Overview
This project uses a PIR (Passive Infrared) sensor to detect motion and displays the status on an OLED screen connected to an Arduino Uno. The project includes the necessary code to interface the PIR sensor and OLED display, providing real-time motion detection feedback.

## Components Required
- Arduino Uno board
- PIR Motion Sensor
- OLED Display (e.g., SSD1306 128x64)
- Jumper wires
- Breadboard (optional)
- USB cable for Arduino Uno

## Pin Configuration

| Component      | Arduino Uno Pin | Description                  |
|----------------|-----------------|------------------------------|
| PIR Sensor VCC | 5V              | Power supply to PIR sensor   |
| PIR Sensor GND | GND             | Ground                      |
| PIR Sensor OUT | Digital Pin 2   | Output signal from PIR sensor|
| OLED VCC       | 3.3V or 5V      | Power supply to OLED display |
| OLED GND       | GND             | Ground                      |
| OLED SDA       | A4              | I2C Data line               |
| OLED SCL       | A5              | I2C Clock line              |

## Libraries Required
- **Adafruit SSD1306**: Library for the OLED display
- **Adafruit GFX**: Core graphics library for OLED

### Library Installation
You can install these libraries via the Arduino IDE Library Manager:
1. Open Arduino IDE
2. Go to **Sketch** > **Include Library** > **Manage Libraries...**
3. Search for `Adafruit SSD1306` and install it
4. Search for `Adafruit GFX` and install it

Alternatively, you can find the libraries here:
- [Adafruit SSD1306 GitHub](https://github.com/adafruit/Adafruit_SSD1306)
- [Adafruit GFX GitHub](https://github.com/adafruit/Adafruit-GFX-Library)

## Instructions to Work with the Project

1. Connect the components according to the pin configuration table above.
2. Open the `piesencer.ino` file in the Arduino IDE.
3. Ensure the required libraries are installed.
4. Select the correct board (Arduino Uno) and port from the **Tools** menu.
5. Compile the code to check for errors.
6. Upload the code to the Arduino Uno.
7. Open the Serial Monitor (optional) to view debug messages.
8. When motion is detected by the PIR sensor, the OLED screen will display the status accordingly.

## Notes
- Make sure the PIR sensor has a clear field of view for accurate motion detection.
- Adjust the PIR sensor sensitivity and delay settings if needed (refer to the sensor datasheet).
- The OLED display uses I2C communication; ensure the wiring is correct.

## License
This project is open source and free to use.
