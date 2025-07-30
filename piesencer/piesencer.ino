#include <Wire.h>
#include <U8g2lib.h>

// Use this constructor for a 16x2 I2C LCD with SSD1306 or similar
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0);

// Pin definitions
const int pirPin = 2;
const int ledPin = 3;
const int buzzerPin = 4;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

  u8g2.begin(); // Initialize the display
  u8g2.enableUTF8Print(); // Enable UTF-8 support
}

void loop() {
  int motionDetected = digitalRead(pirPin);

  u8g2.clearBuffer(); // Clear display buffer

  if (motionDetected == HIGH) {
    Serial.println("Motion Detected!");
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

    u8g2.setFont(u8g2_font_ncenB08_tr); // Choose a readable font
    u8g2.drawStr(0, 15, "Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);

    u8g2.setFont(u8g2_font_ncenB08_tr);
    u8g2.drawStr(0, 15, "No Motion");
  }

  u8g2.sendBuffer(); // Push buffer to display
  delay(10);
}
