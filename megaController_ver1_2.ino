#include<thlib.h>
#include <dht.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHT11_PIN 6
#define buzzer 3

Sensor motionIn(2),motionFr(4),motionBa(7); //digital input
Sensor lightIn(14),lightFr(15),soil(16); //analog input
Sensor lampFr(8,LOW),lampIn(10,LOW),lampBa(12,LOW),valve(9,LOW); // digital output

Timer lcdT(600000),inT(60000),frT(60000),baT(60000),measT(2000),soilT(180000),turnT(250),prtT(1000),securityT(360000),lockT(3600000);

dht DHT;
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7);
 
unsigned long moment = 0;
uint16_t array[3], dry = 400, wet = 900, sum = 0, aver = 0,dark = 100;

boolean butFr = 0,butBa = 0,butIn = 0,butLcd = 1,butVal = 0,lock = 1; //buttons
int countBa = 0; 

void setup(){
    
 LoadLcd();
      
} //end of setup

void loop(){
    
  moment = millis();
  security();
    
  if(motionFr.state()) // front
    openFr(); 
   else 
    closeFr();
  
  
  /*if(!lock){
    
    if(motionBa.state())  //back
      openBa();
    else 
      closeBa();
  }
  */
          
  if(motionIn.state()) //inside
    openIn();  
  else 
    closeIn();
    
  
  /*aver = measurment();
  
  if(aver<dry)
    openVal();
  else if ((aver>wet)||(moment>soilT.limit))
    closeVal();
      */
}//end of loop
  
