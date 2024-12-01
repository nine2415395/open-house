#include <Arduino.h>
#include <AccelStepper.h>

#define Mode 1
#define PUL 13
#define DIR 12

AccelStepper stepper(Mode,PUL,DIR);

void setup()
{  
    stepper.setMaxSpeed(1000);
    stepper.setAcceleration(1000);
    stepper.runToNewPosition(500);
}

void loop()
{    
  stepper.runToNewPosition(0);
}

// put function declarations here:
//int myFunction(int, int);

//void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
//}

//void loop() {
  // put your main code here, to run repeatedly:
//}

// put function definitions here:
//int myFunction(int x, int y) {
  //return x + y;
//}