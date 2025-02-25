# ReactionTimeGameArduino
This Arduino project tests a player's reaction time. When the LED lights up, the player must press the button as quickly as possible. The reaction time is displayed on the 16x2 LCD screen.

# How to Play
1. Upload the code to your Arduino board.<br>
2. When <b>"Get Ready..."</b> appears, wait for the LED to light up.<br>
3. Press the button as quickly as possible when the LED lights up.<br>
4. Your reaction time is displayed on the LCD.<br>

# Components Needed
- Arduino Uno
- 16x2 LCD Display (with I2C module)
- LED (any color)
- Push button
- 220-ohm resistor
- Breadboard
- Jumper wires

# Wiring Instructions
1. Connect the LED:
    - LED anode (long leg) to Arduino pin 8 via a 220-ohm resistor
    - LED cathode (short leg) to GND
2. Connect the push button:
    - One leg of the button to Arduino pin 7
    - The other leg to GND
    - Use the internal pull-up resistor in the code (no external resistor needed)
3. Connect the LCD:
    - VCC to 5V
    - GND to GND
    - SDA to A4
    - SCL to A5
