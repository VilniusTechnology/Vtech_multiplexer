#include <Arduino.h>
#include "Vtech_multiplexer.h"

Vtech_multiplexer::Vtech_multiplexer(int stuff = 0) {

}

void Vtech_multiplexer::writeTo(int pin, int value) {
   analogWrite(PS, value);

   Serial.print("Will write MULTIPLEXED to ACTIVE Pin: "); 
   Serial.print(pin); 
   Serial.print(", value: "); 
   Serial.print(value); 
   Serial.println(""); 
   
   digitalWrite(S0, multiplexeerAdresses[pin][0]);
   digitalWrite(S1, multiplexeerAdresses[pin][1]);
   digitalWrite(S2, multiplexeerAdresses[pin][2]);
   digitalWrite(S3, multiplexeerAdresses[pin][3]);
}
