# ZK Arduino — Stone Paper Scissors

**School hardware project by TechBaseML. This is Arduino firmware, not a website.**

## Choose your Arduino board

- **Arduino UNO R3 / SMD:** [OPEN CODE](Arduino_UNO_R3/Arduino_UNO_R3.ino) | [Wiring guide](Arduino_UNO_R3/WIRING.md)
- **UNO R4 Minima:** [OPEN CODE](Arduino_UNO_R4_Minima/Arduino_UNO_R4_Minima.ino) | [Wiring guide](Arduino_UNO_R4_Minima/WIRING.md)
- **UNO R4 WiFi:** [OPEN CODE](Arduino_UNO_R4_WiFi/Arduino_UNO_R4_WiFi.ino) | [Wiring guide](Arduino_UNO_R4_WiFi/WIRING.md)
- **Nano Classic:** [OPEN CODE](Arduino_Nano_Classic/Arduino_Nano_Classic.ino) | [Wiring guide](Arduino_Nano_Classic/WIRING.md)
- **Mega 2560:** [OPEN CODE](Arduino_Mega_2560/Arduino_Mega_2560.ino) | [Wiring guide](Arduino_Mega_2560/WIRING.md)
- **Leonardo:** [OPEN CODE](Arduino_Leonardo/Arduino_Leonardo.ino) | [Wiring guide](Arduino_Leonardo/WIRING.md)
- **ESP32 DevKit V1 (classic):** [OPEN CODE](ESP32_DevKit_V1/ESP32_DevKit_V1.ino) | [Wiring guide](ESP32_DevKit_V1/WIRING.md)

## Quick steps at school

1. Identify the exact model printed on the board. Click **OPEN CODE** above for that model.
2. Click **Raw** on GitHub, then select all and copy the code.
3. In Arduino IDE choose **File → New Sketch**, then **Ctrl+A**, **Ctrl+V**.
4. Choose the exact model in **Tools → Board**, and the USB port in **Tools → Port**.
5. Click **Verify**. Disconnect USB while wiring. Follow that board's **Wiring guide**.
6. Check every wire, reconnect USB, click **Upload**. Press Stone/Paper/Scissors to play.

## What you need

3 tactile buttons, 3 LEDs (green/red/yellow), 3 × 220Ω resistors, breadboard, jumper wires, matching USB data cable and optionally a 5V USB power bank.

**Green = You Win, Red = You Lose, Yellow = Draw.** Serial Monitor at **9600 baud** displays the computer's move and scores. Each fresh button press plays one round.

## Important safety and compatibility

- Only the **specific board variants listed above** are covered. Nano Every, Nano 33, ESP32-C3/S3 and others are not interchangeable.
- Install the correct board packages/drivers **before school**; UNO R4 and ESP32 require additional board packages.
- Always use a 220Ω resistor with each LED. Connect push buttons to GND using INPUT_PULLUP.
- ESP32 GPIO is **3.3V**, not 5V. Never connect 9V directly to the 5V pin. Use appropriate 5V USB power.
- Code is prepared but **not physically tested on all models**. Test on actual hardware before presenting.
