int brightness = 0;
int fade_amount = 5;

void setup() {
  pinMode(9,OUTPUT);
}

void loop() {
  analogWrite(9,brightness);
  brightness = brightness + fade_amount;
  if (brightness <= 0 || brightness >= 255) {
    fade_amount = -fade_amount;
  }
  delay(50);
}
