#define DIR_L 10
#define STP_L 9

#define DIR_R 8
#define STP_R 7

#include <AccelStepper.h>

AccelStepper stepperL(AccelStepper::DRIVER, STP_L, DIR_L);
AccelStepper stepperR(AccelStepper::DRIVER, STP_R, DIR_R);



void setup() {
  // put your setup code here, to run once:
  pinMode(STP_L, OUTPUT);
  pinMode(STP_R, OUTPUT);
  pinMode(DIR_L, OUTPUT);
  pinMode(DIR_R, OUTPUT);

  stepperL.setCurrentPosition(0);
  stepperR.setCurrentPosition(0);

  stepperL.setMaxSpeed(1000.0);
  stepperL.setAcceleration(100.0);
  stepperL.setSpeed(50);
  stepperR.setMaxSpeed(1000.0);
  stepperR.setAcceleration(100.0);
  stepperR.setSpeed(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  stepperL.setSpeed(-spd);
  stepperR.setSpeed(spd);
  stepperL.runSpeed();
  stepperR.runSpeed();
}
