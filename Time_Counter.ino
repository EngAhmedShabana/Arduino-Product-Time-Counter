#define pb 3
#define gnd 5
long t;
float d;
void setup() {
pinMode(pb,INPUT_PULLUP);
pinMode(gnd,OUTPUT);
digitalWrite(gnd,LOW);
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
t=millis();
while(digitalRead(pb)==LOW){
  d=millis()-t;
 if(digitalRead(pb)==HIGH)Serial.println(d/1000);
}
}
