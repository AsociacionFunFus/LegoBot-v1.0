#include <Servo.h>          // Incluir la librería Servo
Servo controlServo; 
Servo controlServo1; 
Servo controlServo2;
int pinServo = 2;
int posServo = 0;
int pinServo1 = 4;
int posServo1 = 0;
int pinServo2 = 6;
int posServo2 = 0;

void setup() {
  
  controlServo.attach(pinServo);
  controlServo1.attach(pinServo1);
  controlServo2.attach(pinServo2);
}
void loop() 
{
{ 
  if (controlServo.attached() == false)
  {
    controlServo.attach(pinServo);}
    posServo = controlServo.read();
  if (posServo != 80)
  {controlServo.write(80);
    delay(2000);}
  else
  {controlServo.write(165);
    delay(2000);}

{
 
  if (controlServo1.attached() == false)
  {
    controlServo1.attach(pinServo1);}
    posServo1 = controlServo1.read();
  if (posServo1 != 90)
  {controlServo1.write(90);
    delay(2000);}
  else
  {controlServo1.write(180);
    delay(2000);}

}
 {
  
  if (controlServo2.attached() == false)
  {
    controlServo2.attach(pinServo2);}
    posServo2 = controlServo2.read();
  if (posServo2 != 90)
  {controlServo2.write(90);
    delay(2000);}
  else
  {controlServo2.write(140);
    delay(2000);}
}
}
 
