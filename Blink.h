#ifndef Blink_h
#define Blink_h

#include "Arduino.h"

class Blink
{
  public:
    Blink(int pin);
    void On(int t);
    void off(int t);
  private:
    int _pin;
};

#endif

