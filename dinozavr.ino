#include <Servo.h>
Servo melliminservosu;

void setup() {
  Serial.begin(9600);
  melliminservosu.attach(9);
  melliminservosu.write(90);                                                                                    
}

void loop() {
  int x = analogRead(A0);
  Serial.println(x);
  if(x <= 865){
    melliminservosu.write(120);
    delay(100);
  }else{
    melliminservosu.write(90);
  }
}
