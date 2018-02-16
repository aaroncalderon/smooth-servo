/*
  SmoothServo.cpp - Library for smooth motion servo control.
  Created by Florian Bruggisser, June 12, 2017.
  Released into the public domain.
*/

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include <Servo.h>
#include "SmoothServo.h"


SmoothServo::SmoothServo(Servo servo)
{
	_servo = servo;
}

void SmoothServo::test()
{
	delay(5000);
}
