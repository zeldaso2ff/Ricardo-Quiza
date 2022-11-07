#include <Servo.h>

Servo cntServo1; 
int spin1 = 2; // continuum servo pin on 33

int potPin = A6;   // potentiometer
int potValue;


int maxAngle = 180;   //initial angle plus enables variable for rotation
void setup() 
{
cntServo1.attach(spin1);
Serial.begin(9600);

}

void loop() 
{

//read from potentiometer to use later
potValue = analogRead(potPin);
maxAngle = map(potValue,1023,0,0,180);

//  cntServo1.write(85);

cntServo1.write(maxAngle);

}
