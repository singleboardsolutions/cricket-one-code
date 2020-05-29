/*
  Simple demo of Automation Hat from Pimoroni
  https://shop.pimoroni.com/products/automation-hat
*/

#include "rpi_gpio.h"   //Allow use of RPi GPIO numbers
#include "sn3218.h"


//--------------------------------------------
// Relays
#define RELAY_1 GPIO_13
#define RELAY_2 GPIO_19
#define RELAY_3 GPIO_16
//---------------------------------------------
// Inputs

#define INPUT_1 GPIO_26
#define INPUT_2 GPIO_20
#define INPUT_3 GPIO_21
//----------------------------------------------
// Low Side Output pins 

#define LSO_1 GPIO_5
#define LSO_2 GPIO_12
#define LSO_3 GPIO_6
//----------------------------------------------
//LED's

#define LED_ADC1 0
#define LED_ADC2 1
#define LED_ADC3 2

#define LED_LSO1 3
#define LED_LSO2 4
#define LED_LSO2 5

#define LED_RLY1_NO 6
#define LED_RLY1_NC 7
#define LED_RLY2_NO 8
#define LED_RLY2_NC 9
#define LED_RLY3_NO 10
#define LED_RLY3_NC 11

#define LED_INP3 12
#define LED_INP2 13
#define LED_INP1 14

#define LED_WARN 15
#define LED_COMS 16
#define LED_PWR  17

//----------------------------------------------
// ADC (ADS1015)
// AIN0 - AIN3 are 24V tolerant via a voltage divider

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  sn3218.begin();  
  sn3218.reset();
  sn3218.enable_leds(SN3218_CH_ALL);
  sn3218.set(LED_PWR, 30);
  sn3218.update(); 
  
  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);
  pinMode(RELAY_3, OUTPUT);

}

// the loop function runs over and over again forever (tick tock)
void loop() {
  digitalWrite(RELAY_1, HIGH);   // turn the relay on (HIGH is the voltage level)
  delay(500);                  
  digitalWrite(RELAY_1, LOW);   // turn the relay off (LOW is the voltage level)
  delay(500);
  digitalWrite(RELAY_2, HIGH);   // turn the relay on (HIGH is the voltage level)
  delay(500);                  
  digitalWrite(RELAY_2, LOW);   // turn the relay off (LOW is the voltage level)
  delay(500);
  digitalWrite(RELAY_3, HIGH);   // turn the relay on (HIGH is the voltage level)
  delay(500);                  
  digitalWrite(RELAY_3, LOW);   // turn the relay off (LOW is the voltage level)
  delay(500);
         
}
