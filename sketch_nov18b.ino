void setup() {
  // put your setup code here, to run once:
    pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(13,HIGH);
    delay(30);
    digitalWrite(13,LOW);
    delay(50);
    digitalWrite(13,HIGH);
    delay(899);
    digitalWrite(13,LOW);
    delay(500);
    digitalWrite(13,HIGH);
    delay(80);
    digitalWrite(13,LOW);
    delay(50);
}
