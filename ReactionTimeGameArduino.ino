#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
const int ledPin = 8;
const int buttonPin = 7;

unsigned long startTime;
unsigned long reactionTime;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  lcd.setCursor(0, 0);
  lcd.print("Reaction Game");
  delay(2000);
}

void loop() {
  lcd.clear();
  lcd.print("Get Ready...");
  delay(random(2000, 5000)); // Random delay before LED lights up

  digitalWrite(ledPin, HIGH);
  startTime = millis();

  while (digitalRead(buttonPin) == HIGH) {
    // Wait for button press
  }

  digitalWrite(ledPin, LOW);
  reactionTime = millis() - startTime;

  lcd.clear();
  lcd.print("Time: ");
  lcd.print(reactionTime);
  lcd.print(" ms");

  delay(3000); // Display result for 3 seconds
}
