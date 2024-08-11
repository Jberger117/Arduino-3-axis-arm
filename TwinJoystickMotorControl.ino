// Arduino joystick DC motor speed and rotation direction control 

const int joystickY = A0;
const int joystickX = A1;

//motor 1
const int pwm1 = 9;
const int pwm2 = 10;

//motor 2
const int pwm3 = 6;
const int pwm4 = 5;
 
int motor_controlY;

int motor_controlX;
 
 
void setup() {
  pinMode(pwm1, OUTPUT);
  pinMode(pwm2, OUTPUT);
  pinMode(pwm3, OUTPUT);
  pinMode(pwm4, OUTPUT);
  
  
  
}
 
void loop() {
  
 
 //Y axis
  motor_controlY = analogRead(joystickY);
  motor_controlY >>= 1;

  motor_controlX = analogRead(joystickX);
  motor_controlX >>= 1;

  if(motor_controlY > 255){
    digitalWrite(pwm2, 0);
    analogWrite(pwm1, (motor_controlY - 256));
    

  }
  else
    if(motor_controlY < 255){
      digitalWrite(pwm1, 0);
      analogWrite(pwm2, (255 - motor_controlY));
      
    }
    else{
      digitalWrite(pwm1, 0);
      digitalWrite(pwm2, 0);
      
}

    // X axis   
  motor_controlX = analogRead(joystickX);
  motor_controlX >>= 1;
  if(motor_controlX > 255){
    digitalWrite(pwm4, 0);
    analogWrite(pwm3, (motor_controlX - 256));
    

  }
  else
    if(motor_controlX < 255){
      digitalWrite(pwm3, 0);
      analogWrite(pwm4, (255 - motor_controlX));
      
    }
    else{
      digitalWrite(pwm3, 0);
      digitalWrite(pwm4, 0);
      
    }



}


