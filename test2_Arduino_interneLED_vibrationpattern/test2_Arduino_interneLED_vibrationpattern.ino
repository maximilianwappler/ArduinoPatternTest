int motorPin1=2;
int motorPin2=3; // PWM
 
void setup(){
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
}
 
void motorStop(){
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
  delay(500);
}
 
void loop(){
  motorStop();                    // Motor Stop
 
  digitalWrite(motorPin1,HIGH);   // Motor Vor
  digitalWrite(motorPin2,LOW);
  delay(1000);
 
  motorStop();                    // Motor Stop
 
  digitalWrite(motorPin1,LOW);    // Motor Rueck
  digitalWrite(motorPin2,HIGH);
  delay(1000);
 
  motorStop();                    // Motor Stop
}
