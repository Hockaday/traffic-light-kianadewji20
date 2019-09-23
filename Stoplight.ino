#include <Servo.h> 

int servoPin = 13; 
Servo Servo1; 
const int buzzer = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT); //Top Red
  pinMode(11, OUTPUT); //Top Yellow
  pinMode(10, OUTPUT); //Top Green
  
  pinMode(8, OUTPUT); //Bottom Red
  pinMode(7, OUTPUT); //Bottom Yellow
  pinMode(6, OUTPUT); //Bottom Green

  Servo1.attach(servoPin); 
  Servo1.write(0);

  pinMode(2, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(12, HIGH);
  digitalWrite(6, HIGH);
  delay(4000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
      tone(buzzer, 1000); // Send 1KHz sound signal...
      delay(1000);        // ...for 1 sec
      noTone(buzzer);
      
      Servo1.write(90); 
     delay(4000);
      Servo1.write(0);
      
  if(digitalRead(4) == HIGH) {
    digitalWrite(3, HIGH); 
    delay(3000);
    digitalWrite(3, LOW);
  }
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  delay(4000);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);

  if(digitalRead(4) == HIGH) {
    digitalWrite(3, HIGH); 
    delay(4000);
    digitalWrite(3, LOW);
  }
  delay(2000);
  digitalWrite(8, LOW);


   // Servo1.write(90);
   //delay(1000);
  //Servo1.write(0); 
   //delay(1000);
  //Servo1.write(90); 
   //delay(1000);
  //Servo1.write(180); 
   //delay(1000); 
}

 
