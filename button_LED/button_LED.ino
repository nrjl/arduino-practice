void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(5,OUTPUT);
}

void loop() {
  int sensor_value = digitalRead(2);
  if(sensor_value) {
    digitalWrite(5,HIGH);
  }
  else {
    digitalWrite(5,LOW);
  }
}
