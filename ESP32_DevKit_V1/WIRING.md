# Classic ESP32-WROOM-32 DevKit V1 (not C3/S3) wiring

BUTTONS (INPUT_PULLUP; no external button resistors):
- STONE: pin 18 -> button -> GND
- PAPER: pin 19 -> button -> GND
- SCISSORS: pin 21 -> button -> GND

LEDs (one 220-ohm resistor PER LED):
- GREEN / WIN: pin 23 -> resistor -> long LED leg (+); short leg (-) -> GND
- RED / LOSE: pin 22 -> resistor -> long LED leg (+); short leg (-) -> GND
- YELLOW / DRAW: pin 25 -> resistor -> long LED leg (+); short leg (-) -> GND

Board selection: esp32 by Espressif Systems → ESP32 Dev Module
Leave 34 unconnected for random seed.
Power through the board USB connector with a suitable 5V USB power bank.
IMPORTANT: GPIO is 3.3V; never feed 5V into ESP32 GPIO.
For 4-leg tactile buttons use contacts that connect only when pressed (opposite switch sides).
Disconnect power while wiring. Check pin labels before applying power.
