int led1 = 3;
int led2 = 5;
int led3 = 6;


void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  int i,j,k=0;
  for(i=0;i<10;i++) {
    analogWrite(led1,i*25);
    for(j=0;j<10;j++) {
      analogWrite(led2,j*25);
      for(k=0;k<10;k++) {
        analogWrite(led3,k*25);
        delay(10);
      }
    }
  }

  
}
