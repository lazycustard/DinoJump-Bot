#include <Servo.h>

#define threshold 85
#define unpress_angle 70
#define press_angle 130

Servo s2; 

void setup() {
  Serial.begin(9600);
  s2.attach(9);
  s2.write(unpress_angle);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue); 
  delay(10);

  if (sensorValue < threshold) {
    s2.write(press_angle); 
  } else {
    s2.write(unpress_angle);
  }

  delay(5); 
} 
