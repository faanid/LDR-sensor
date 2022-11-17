int ldr = A0;
int ledpin2 =3;
int ldrReading;
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);

}

void loop() {
  ldrReading = analogRead(ldr);
  Serial.println("LDR value is :");
  Serial.println(ldrReading);
  if (ldrReading<150){
    digitalWrite(3,HIGH);
    
  }
  else {
    digitalWrite(3,LOW);
  }

}
