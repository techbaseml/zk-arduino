# UNO R4 Minima wiring

BUTTONS (INPUT_PULLUP; no external button resistors):
- STONE: pin 2 -> button -> GND
- PAPER: pin 3 -> button -> GND
- SCISSORS: pin 4 -> button -> GND

LEDs (one 220-ohm resistor PER LED):
- GREEN / WIN: pin 8 -> resistor -> long LED leg (+); short leg (-) -> GND
- RED / LOSE: pin 9 -> resistor -> long LED leg (+); short leg (-) -> GND
- YELLOW / DRAW: pin 10 -> resistor -> long LED leg (+); short leg (-) -> GND

Board selection: Arduino UNO R4 Boards → UNO R4 Minima
Leave A0 unconnected for random seed.
Power through the board USB connector with a suitable 5V USB power bank.
IMPORTANT: never feed a 9V battery into the 5V pin.
For 4-leg tactile buttons use contacts that connect only when pressed (opposite switch sides).
Disconnect power while wiring. Check pin labels before applying power.
