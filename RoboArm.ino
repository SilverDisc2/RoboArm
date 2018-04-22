#include <Servo.h>

Servo servothumb;          
Servo servothree;         
Servo servopoint;
void setup() {
  Serial.begin(9600);
 servopoint.attach(3); 
servothumb.attach(10); 
servothree.attach(11); 
Serial.println("Choose any one from given movenments");
Serial.println("a.Good b.ThumbsUp c.Point d.All");
}
  


void loop() { 
  
    char c = Serial.read();  
    if (c == 'a')
  {
     delay(1000);
     good();
  }
  if(c=='b')
  {
        delay(2000);
        thumbsUp();
}
if(c=='c')
{
  delay(2000);
  point();
 }
 if(c=='d')
 {
  start();
 }
}
 
void good() {
 
  servopoint.write(0);
  servothumb.write(0);
  servothree.write(0);

}

void start() {
  servopoint.write(0);
  servothumb.write(0);
  servothree.write(180);
  delay(1000);
  servopoint.write(180);
  servothumb.write(180);
  servothree.write(0);
}

void point() {
  servopoint.write(180);
  servothumb.write(0);
  servothree.write(180);

}
void thumbsUp() {
  
  servothumb.write(180);
  servopoint.write(0);
  servothree.write(180);
 
}

