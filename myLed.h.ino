#include <Arduino.h>
class myLed{
  private:
    int _pin1;
    int _pin2;
    int _pin3;
    int _pin4;
    

  public:
    myLed(int a, int b, int c, int d);
    Begin();
    upCount();
    downCount();
    shiftRight();
    shiftLeft();
    allOff();
    dispDigit(int numb, int pin[4]);
  };
