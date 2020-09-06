int pin1 = 7;
int pin2 = 6;
int pin3 = 5;
int pin4 = 4;
int LED = 13;
int switchbin = 0b0000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
  pinMode(pin4, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (digitalRead(pin1) == HIGH)
    switchbin += 0b0001;
  if (digitalRead(pin2) == HIGH)
    switchbin += 0b0010;
  if (digitalRead(pin3) == HIGH)
    switchbin += 0b0100;
  if (digitalRead(pin4) == HIGH)
    switchbin += 0b1000;

  if ( (switchbin == 0) || (switchbin == 5) || (switchbin == 6) || (switchbin == 13) || (switchbin == 14)){
    digitalWrite(LED, HIGH);
    delay(10);
  }
  else {
    digitalWrite(LED, LOW);
  }

 switchbin = 0b0000;
}
