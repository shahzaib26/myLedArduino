#include "myLed.h"
myLed::myLed(int pin1,int pin2, int pin3, int pin4){
  _pin1 = pin1;
  _pin2 = pin2;  
  _pin3 = pin3;  
  _pin4 = pin4;  
  }

myLed::Begin(){
  
  pinMode(_pin1, OUTPUT);
  pinMode(_pin2, OUTPUT);
  pinMode(_pin3, OUTPUT);
  pinMode(_pin4, OUTPUT);
  
  }

myLed::upCount(){
  int pins[4] = {_pin1,_pin2,_pin3,_pin4};
  for(int k = 0; k<=15; k++){
    dispDigit(k,pins);
    delay(1000);   
    }
  }

myLed::downCount(){
   int pins[4] = {_pin1,_pin2,_pin3,_pin4};
  for(int k = 15; k>=0; k--){
    dispDigit(k,pins); 
    delay(1000);  
    }
  
  
  }

myLed::shiftRight(){
   int val[4] = {8,4,2,1};
   int pins[4] = {_pin1,_pin2,_pin3,_pin4};
  for(int k = 0; k<4; k++){
    dispDigit(val[k],pins); 
    delay(1000);  
    }
  
  
  }

myLed::shiftLeft(){
   int val[4] = {1,2,4,8};
   int pins[4] = {_pin1,_pin2,_pin3,_pin4};
  for(int k = 0; k<4; k++){
    dispDigit(val[k],pins); 
    delay(1000);  
    }  
  }

myLed::allOff(){
   int pins[4] = {_pin1,_pin2,_pin3,_pin4};
    dispDigit(0,pins);    
  }


myLed::dispDigit(int numb, int pins[4]){

    for(int i = 0; i<4; i++){
      if(bitRead(numb,i)==1){
        
        digitalWrite(pins[i], HIGH);
        
        }
      else{
        digitalWrite(pins[i],LOW);
        }  
      }
  
  
  }
