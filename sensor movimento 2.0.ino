// C++ code
//
void setup()
{
  pinMode(5, INPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  if (digitalRead(5) == 0) {
    digitalWrite(3, HIGH);
    digitalWrite(6, LOW);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(6, HIGH);
    tone(4, 523, 1000); // play tone 60 (C5 = 523 Hz)
  }
  delay(10); // Delay a little bit to improve simulation performance
}