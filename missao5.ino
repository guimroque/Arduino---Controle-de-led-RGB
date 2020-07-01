#define R 3
#define G 5
#define B 6
#define b 4
void setup(){
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(b, INPUT);
}
void loop(){
  if(millis()<=10000){
    analogWrite(R, 255-255);
    analogWrite(G, 255-0);
    analogWrite(B, 255-0);
    
    }
  if(millis()>10000&&millis()<=20000){
    analogWrite(R, 255-0);
    analogWrite(G, 255-255);
    analogWrite(B, 255-0);
    }
  if(millis()>20000){
    analogWrite(R, 255-0);
    analogWrite(G, 255-0);
    analogWrite(B, 255-0);}
  if(millis()>20000 && digitalRead(b)==1){
    analogWrite(R, 255-0);
    analogWrite(G, 255-0);
    analogWrite(B, 255-255);
    delay(10000);
    }
  if(millis()>26000){
    analogWrite(R, 255-255);
    analogWrite(G, 255-0);
    analogWrite(B, 255-0);
    }
}
