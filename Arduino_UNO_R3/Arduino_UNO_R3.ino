// ZK Stone Paper Scissors - UNO R3 (including SMD)
// by TechBaseML
// Buttons: Stone 2, Paper 3, Scissors 4 to GND.
// LEDs: Green WIN 8, Red LOSE 9, Yellow DRAW 10.
// Each LED: pin -> 220-ohm resistor -> long LED leg; short leg -> GND.
// Use USB 5V power; never connect a 9V battery to the 5V pin.
const int buttons[3]={2,3,4};
const int leds[3]={8,9,10};
const char* names[3]={"STONE","PAPER","SCISSORS"};
bool stable[3]={HIGH,HIGH,HIGH};
bool previous[3]={HIGH,HIGH,HIGH};
unsigned long changed[3]={0,0,0};
unsigned long wins=0, losses=0, draws=0;
void clearLeds(){for(int i=0;i<3;i++)digitalWrite(leds[i],LOW);}
void play(int player){
  int cpu=random(3);
  int outcome=(player-cpu+3)%3; // 0 draw, 1 win, 2 lose
  clearLeds();
  digitalWrite(leds[outcome==0?2:outcome==1?0:1],HIGH);
  if(outcome==0)draws++;else if(outcome==1)wins++;else losses++;
  Serial.print("YOU: ");Serial.print(names[player]);
  Serial.print(" | CPU: ");Serial.print(names[cpu]);
  Serial.print(" | ");Serial.println(outcome==0?"DRAW":outcome==1?"YOU WIN":"YOU LOSE");
  Serial.print("Wins: ");Serial.print(wins);
  Serial.print(" Losses: ");Serial.print(losses);
  Serial.print(" Draws: ");Serial.println(draws);
}
void setup(){
  Serial.begin(9600);
  for(int i=0;i<3;i++){pinMode(buttons[i],INPUT_PULLUP);pinMode(leds[i],OUTPUT);}
  clearLeds();
  // Leave analog seed pin A0 unconnected. Pseudorandom, suitable for a classroom game.
  randomSeed((unsigned long)analogRead(A0) ^ micros());
  for(int i=0;i<3;i++){digitalWrite(leds[i],HIGH);delay(180);digitalWrite(leds[i],LOW);}
  Serial.println("ZK STONE PAPER SCISSORS READY");
}
void loop(){
  for(int i=0;i<3;i++){
    bool reading=digitalRead(buttons[i]);
    if(reading!=previous[i])changed[i]=millis();
    if(millis()-changed[i]>=35 && reading!=stable[i]){
      stable[i]=reading;
      if(stable[i]==LOW)play(i);
    }
    previous[i]=reading;
  }
}
