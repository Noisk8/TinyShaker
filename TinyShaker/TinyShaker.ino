//Modified version for Tiny Servo, using Servo8Bit from Cunning Turtle
//http://www.cunningturtle.com/servo8bit-library-version-0-6-released/ 

#include "Servo8Bit.h"

Servo8Bit myServo;  //create a servo object.
                    //a maximum of five servo objects can be created

int pos = 0;

void setup()
{ 
  //myServo.attach(1,544,2400);  //this is the default values
  myServo.attach(1,544,2200);  //attach the servo to pin PB1      
}

void loop()
{
    
    for(pos = 0; pos <= 180; pos+=10)  // goes from 0 degrees to 180 degrees
    {                                   // in steps of 5 degree
        myServo.write(pos);             // tell servo to go to position in variable 'pos'
        delay(10);                      // waits 10ms for the servo to reach the position
    }

    for(pos = 180; pos >= 0; pos-=10)  // goes from 180 degrees to 0 degrees
    {
        myServo.write(pos);             // tell servo to go to position in variable 'pos'
        delay(10);                      // waits 10ms for the servo to reach the position
    }
}
