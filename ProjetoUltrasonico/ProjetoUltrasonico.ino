
#include "Ultrasonic.h"
Ultrasonic ultrasonic(3, 2);


const int ledAzul = 4;
const int ledAmarelo = 5;
const int ledVermelho = 6;

long microsec = 0; 
float distanciaCM = 0;

void setup() {
  Serial.begin(9600); 
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  
  microsec = ultrasonic.timing();

  
  distanciaCM = ultrasonic.convert(microsec, Ultrasonic::CM);

  ledDistancia();
  Serial.print(distanciaCM);
  Serial.println(" cm");
  delay(500);
}

void ledDistancia() {

  
  digitalWrite(ledAzul, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);

  
  if (distanciaCM <= 30 and distanciaCM >= 20) {
    digitalWrite(ledAzul, HIGH); 
  }
  
  if (distanciaCM <= 20 and distanciaCM >= 10) {
    digitalWrite(ledAmarelo, HIGH); 
  }

  if (distanciaCM < 10) { 
    digitalWrite(ledVermelho, HIGH);
  }
}