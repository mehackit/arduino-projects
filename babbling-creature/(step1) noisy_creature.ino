#include "notes.h" // adds the notes.h
int speakerPin = 9;// pins defined as variables
int tiltPin = 2;// cause they are used many times in the program

void setup() {
  pinMode(speakerPin, OUTPUT);// pin 9 piezo speaker - output
  pinMode(tiltPin, INPUT_PULLUP);// pin 2 tilt switch - input
  Serial.begin(9600);// debugging helps!
}

void loop() {
   int soundNumber = random(4);// random value 0-3 saves to "soundNumber"
   
   if (digitalRead(tiltPin) == LOW) {
     // turns "soundNumber" to 4
   }
   // print "soundNumber" to serial monitor
   // add a delay of 1-2 seconds
}

