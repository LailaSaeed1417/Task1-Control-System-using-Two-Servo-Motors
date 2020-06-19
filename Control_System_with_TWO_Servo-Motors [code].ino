// include library
#include <Servo.h> 


// identity object
Servo ServoMotorA; 
Servo ServoMotorB;

void setup() {
  // put your setup code here, to run once:
  
ServoMotorA.attach(9);
ServoMotorB.attach(6);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  ServoMotorA.write(0);
  ServoMotorB.write(0); 
  delay(1000);
  
  ServoMotorA.write(90);
  ServoMotorB.write(90);
  delay(1000);   
  
  ServoMotorA.write(180);
  ServoMotorB.write(180);
  delay(1000);
  
  ServoMotorA.write(90);
  ServoMotorB.write(90);
  delay(1000);
 
}
