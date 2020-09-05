/*
  Strobe the LED's on the Cytron Maker pHAT 
  https://www.cytron.io/p-maker-phat-simplifying-raspberry-pi-for-education
*/

#include "rpi_gpio.h"   //Allow use of RPi GPIO numbers

int delayTime = 15;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(GPIO_17, OUTPUT);
  pinMode(GPIO_18, OUTPUT);
  pinMode(GPIO_27, OUTPUT);
  pinMode(GPIO_22, OUTPUT);
  pinMode(GPIO_25, OUTPUT);
  pinMode(GPIO_12, OUTPUT);
  pinMode(GPIO_13, OUTPUT);
  pinMode(GPIO_19, OUTPUT);
  pinMode(GPIO_26, OUTPUT);

  pinMode(GPIO_16, INPUT);
  pinMode(GPIO_20, INPUT);
  pinMode(GPIO_21, INPUT);

  digitalWrite(GPIO_26, LOW);   // Turn off the buzzer
  
}

// the loop function runs over and over again forever
void loop() {

  if(!digitalRead(GPIO_20)) 
  {
     digitalWrite(GPIO_26, HIGH);   // Turn off the buzzer
     delay(10);
     digitalWrite(GPIO_26, LOW);   // Turn off the buzzer
  }
  
  if(!digitalRead(GPIO_16))   // Speed up the chase
  {
    delayTime--;
    if (delayTime == 0) delayTime = 1; //keep from trying a delay(0)
  }
  
   if(!digitalRead(GPIO_21)) 
  {
    delayTime++;
  }
  
  digitalWrite(GPIO_17, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_18, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_27, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_22, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_25, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_19, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);                      
  digitalWrite(GPIO_17, LOW);   // turn the LED off (LOW is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_18, LOW);   // turn the LED off (LOW is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_27, LOW);   // turn the LED off (LOW is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_22, LOW);   // turn the LED off (LOW is the voltage level))
  delay(delayTime);
  digitalWrite(GPIO_25, LOW);   // turn the LED off (LOW is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_12, LOW);   // turn the LED off (LOW is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_13, LOW);   // turn the LED off (LOW is the voltage level)
  delay(delayTime);
  digitalWrite(GPIO_19, LOW);   // turn the LED off (LOW is the voltage level)
  delay(delayTime);                    
}
