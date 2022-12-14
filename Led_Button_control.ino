int switchState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(2 , INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  if (switchState == LOW) {
    digitalWrite(3, HIGH);
    Serial.print("LED ON");
    Serial.println();
    delay(100);
    }

  else {
    digitalWrite(3, LOW);
    delay(100);
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    Serial.print("LED Blinking");
    Serial.println();
    }
}
