#define LedVermelho 8
#define LedAmarelo 9
#define LedVerde 10
void setup()
{
  pinMode (LedVermelho, OUTPUT);
  pinMode (LedAmarelo, OUTPUT);
  pinMode (LedVerde, OUTPUT);
}

void loop()
{
  digitalWrite (LedVermelho, LOW);
  digitalWrite(LedVerde, HIGH);
  delay(2000);
  digitalWrite(LedVerde, LOW);
  delay(500); 
  for (int i =  0; i < 3; i++){
    digitalWrite(LedAmarelo, HIGH);
    delay(500);
    digitalWrite(LedAmarelo, LOW);
    delay(500);
  }
  digitalWrite(LedVermelho, HIGH);
  delay(2000);
  digitalWrite(LedVermelho, LOW);
  delay(500);
}