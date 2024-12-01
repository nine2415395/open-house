# open-house
# open-house

- main file `scr/main.cpp`
```cpp 
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
```

-using accelstepper libraries
-stepper is accelstepper object
-max speed is 1000 step per second
-acceleration is 100 steps per second