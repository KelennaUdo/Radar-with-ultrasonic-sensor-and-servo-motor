#include <Arduino.h>
#include<Servo.h>

#define trigPin 8
#define echoPin 9
#define buzz 3

long duration;
int distance ;

Servo myservo;

int calculateDistance()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  if (distance <= 40){
    digitalWrite(buzz,1);
  }else{
    digitalWrite(buzz,0);
  }
  return distance;
}

void setup()
{
  pinMode(trigPin , OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(4);
  Serial.begin(9600);
}

void loop()
{
 int i ;
 for (i=15; i<=165; i++)
 {
  myservo.write(i);
  delay(15);
  calculateDistance();
  Serial.print(i);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
 }
 for(i=165; i>=15; i--)
 {
  myservo.write(i);
  delay(15);
  calculateDistance();
  Serial.print(i);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
  
 }
}
