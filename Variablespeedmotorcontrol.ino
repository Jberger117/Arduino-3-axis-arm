const int switchpin = 2;
const int motorpin = 9;
int switchstate = 0;

int speedval = 0;
const int speedin = A0;
const int speedout = 10;
int voltage = 0;



void setup() {

pinMode(motorpin, OUTPUT);
pinMode(switchpin, INPUT);
pinMode(speedin, INPUT); 
pinMode(speedout, OUTPUT); 


Serial.begin(9600);
}

void loop() {

switchstate = digitalRead(switchpin);
voltage = analogRead(speedin)/4;


analogWrite(speedout, voltage); 

if (switchstate == HIGH) {
  digitalWrite(motorpin, HIGH);
}

else {
  digitalWrite(motorpin, LOW);
}


}
