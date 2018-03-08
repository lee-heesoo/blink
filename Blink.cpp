#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Blink::On(int t)
{
  digitalWrite(_pin, HIGH);
  delay(t);
}

void Blink::off(int t)
{
  digitalWrite(_pin, LOW);
  delay(t);
}


