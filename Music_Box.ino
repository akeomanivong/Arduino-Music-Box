#include "pitches.h"
const int di1 = A0;
const int di2 = A1;
const int di3 = A2;
const int di4 = A3;
const int di5 = A4;
const int di6 = A5;
const int di7 = A6;
const int di8 = A7;
const int buzzerPin = 9;
const int duration = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(di1, INPUT_PULLUP);
  pinMode(di2, INPUT_PULLUP);
  pinMode(di3, INPUT_PULLUP);
  pinMode(di4, INPUT_PULLUP);
  pinMode(di5, INPUT_PULLUP);
  pinMode(di6, INPUT_PULLUP);
  pinMode(di7, INPUT_PULLUP);
  pinMode(di8, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Diode 1: ");
  Serial.print(analogRead(di1));
  Serial.print("  Diode 2: ");
  Serial.print(analogRead(di2));
  Serial.print("  Diode 3: ");
  Serial.print(analogRead(di3));
  Serial.print("  Diode 4: ");
  Serial.print(analogRead(di4));
  Serial.print("  Diode 5: ");
  Serial.print(analogRead(di5));
  Serial.print("  Diode 6: ");
  Serial.print(analogRead(di6));
  Serial.print("  Diode 7: ");
  Serial.print(analogRead(di7));
  Serial.print("  Diode 8: ");
  Serial.println(analogRead(di8));
  /*if(analogRead(di1) > 500)
  {
    tone(buzzerPin, NOTE_C4, duration);
  }
  if(analogRead(di2) > 500)
  {
    tone(buzzerPin, NOTE_D4, duration);
  }
  if(analogRead(di3) > 500)
  {
    tone(buzzerPin, NOTE_E4, duration);
  }
  if(analogRead(di4) > 500)
  {
    tone(buzzerPin, NOTE_F4, duration);
  }
  if(analogRead(di5) > 500)
  {
    tone(buzzerPin, NOTE_G4, duration);
  }
  if(analogRead(di6) > 500)
  {
    tone(buzzerPin, NOTE_A4, duration);
  }
  if(analogRead(di7) > 500)
  {
    tone(buzzerPin, NOTE_B4, duration);
  }
  if(analogRead(di8) > 500)
  {
    tone(buzzerPin, NOTE_C5, duration);
  }*/

//////////////////////////////////////////////////////////////////////////////
  
  if(analogRead(di1) > 500)
  {
    tone(buzzerPin, NOTE_C4, duration);
  }
  if(analogRead(di2) > 500)
  {
    tone(buzzerPin, NOTE_D4, duration);
  }
  if(analogRead(di3) > 500)
  {
    tone(buzzerPin, NOTE_E4, duration);
  }
  if(analogRead(di4) > 500)
  {
    tone(buzzerPin, NOTE_F4, duration);
  }
  if(analogRead(di5) > 500)
  {
    tone(buzzerPin, NOTE_G4, duration);
  }
  if(analogRead(di6) > 500)
  {
    tone(buzzerPin, NOTE_A4, duration);
  }
  if(analogRead(di7) > 500)
  {
    tone(buzzerPin, NOTE_AS4, duration);
  }
  if(analogRead(di8) > 500)
  {
    tone(buzzerPin, NOTE_C5, duration);
  }
  //delay(1000);
}
