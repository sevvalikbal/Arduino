
void setup() {
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(8000); 
  digitalWrite(8, HIGH); // Sarıyı söndür
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);
  delay(2000);
  digitalWrite(8, LOW); // Yeşili söndür
  digitalWrite(10, LOW);
  digitalWrite(12,HIGH);
  delay(5000);
}
