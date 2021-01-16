#include <Servo.h>

#define SERVO_PIN    9  //PWM pin that is connected to the servo
#define SERVO_PIN2    8

Servo demoServo;        //create a servo object
Servo demoServo2;
int servoAngle = 0;     //servo angle which can vary from 0 - 180

void setup() 
{
  demoServo.attach(SERVO_PIN, 1000, 2000);  //attach the pin to the object so that we can send the signal to it. 
                                            //I've defined the range between 1000-2000us or 1-2ms as the default range is non-standard
  demoServo2.attach(SERVO_PIN2, 1000, 2000);
}

void loop() 
{
 
  demoServo.write(0);                                  //move servo to 60 deg
  delay(1000);                                           //wait for 500ms   
  
  demoServo.write(100);                                 //move servo to 120 deg
  delay(1000);                                           //wait for 500ms  
  
  demoServo.write(20);                                 //move servo to 180 deg
  delay(1000);                                           //wait for 500ms  
  
  demoServo.write(180);                                 //move servo to 120 deg
  delay(1000);                                           //wait for 500ms  
  
  demoServo.write(40);                                  //move servo to 60 deg
  delay(1000);                                           //wait for 500ms      
  
  demoServo.write(159);                                   //move servo to 0 deg
  delay(1000);                                           //wait for 500ms       

  demoServo.write(70);                                  //move servo to 60 deg
  delay(1000);                                           //wait for 500ms   
  
  demoServo.write(0);                                 //move servo to 120 deg
  delay(1000);                                           //wait for 500ms  
  
  demoServo.write(90);                                 //move servo to 180 deg
  delay(1000);                                           //wait for 500ms  
  
  demoServo.write(200);                                 //move servo to 120 deg
  delay(1000);                                           //wait for 500ms  
  
  demoServo.write(6);                                  //move servo to 60 deg
  delay(1000);                                           //wait for 500ms      
  
  demoServo.write(100);                                   //move servo to 0 deg
  delay(1000);                                           //wait for 500ms    

 demoServo2.write(180);                                 //move servo to 120 deg
  delay(1000);                                           //wait for 500ms  
  
  demoServo2.write(40);                                  //move servo to 60 deg
  delay(1000);                                           //wait for 500ms      
  
  demoServo2.write(159);                                   //move servo to 0 deg
  delay(1000);                                           //wait for 500ms       

  demoServo2.write(70);                                  //move servo to 60 deg
  delay(1000);                                           //wait for 500ms   
  
  demoServo2.write(0);                                 //move servo to 120 deg
  delay(1000);                                           //wait for 500ms  
  
  demoServo2.write(90);                                 //move servo to 180 deg
  delay(1000); 
}
