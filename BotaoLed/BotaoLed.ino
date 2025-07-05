//Código que eu fiz para brincar com os leds e o botão

void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,INPUT_PULLUP);

}

void loop() {
  while(digitalRead(11) == LOW){
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    if(digitalRead(13) == HIGH && digitalRead(12 == HIGH)){
      digitalWrite(13,LOW);
      delay(3000);
      digitalWrite(12,LOW);
      delay(3000);
    }
  } 

}
