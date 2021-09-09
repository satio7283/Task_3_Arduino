#define MOTOR1 8
#define MOTOR2 9
#define EN 10
#define switchkey 5
#define led 11
int POT_VAL;
 
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(EN,OUTPUT);
  pinMode(MOTOR1,OUTPUT);
  pinMode(MOTOR2,OUTPUT);
  pinMode(switchkey,INPUT_PULLUP);
 
}
 
void loop() {
      byte switchstate = digitalRead(switchkey);
      if(switchstate == HIGH){
        analogWrite(led, 255);
        Serial.println("switch is ON now!!");
        analogWrite(EN,75);
        digitalWrite(MOTOR1,HIGH);
        digitalWrite(MOTOR2,LOW);
      }else{
        Serial.println("switch is OFF now!!");
        analogWrite(led, 03);
        analogWrite(EN,0);
        analogWrite(led,0);
      }
   
 
 
 
}
