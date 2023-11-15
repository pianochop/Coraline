#include<Servo.h>

Servo moon;  // create servo object to control a servo 
Servo sun;
                // a maximum of eight servo objects can be created 
 
int moonpos = 0;    // variable to store the moon servo position
int sunpos = 100;   // variable to store the sun servo position

const int trigPin = 9; // pin for trigger
const int echoPin = 10; //pin for echo
int sensorReading;
long duration;
int distance;
 
void setup() 
{ 
  moon.attach(0);  // attaches the servo on pin 0 to the moon servo object 
  sun.attach(1); // attaches the servo on pin 1 to the sun servo object
} 
 
void loop() 
{ 

//servo 1 (moon)
  for(moonpos = 0; moonpos < 120; moonpos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    moon.write(moonpos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(moonpos = 120; moonpos>=1; moonpos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    moon.write(moonpos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 

// servo 2 (sun)

  for(sunpos = 120; sunpos>=0; sunpos -= 1)  // goes from 180 degrees to 0 degrees 
  {                                  // in steps of 1 degree 
    sun.write(sunpos);              // tell servo to go to position in variable 'sunpos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(sunpos = 0; sunpos<=120; sunpos+=1)     // goes from 180 degrees to 0 degrees 
  {                                
    sun.write(sunpos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 


}

