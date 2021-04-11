const int trigPin = 12;
const int echoPin = 13;
long duration;
int distance;

void setup() 
{
 pinMode (8,OUTPUT);
 pinMode (trigPin,OUTPUT);
 pinMode (echoPin,INPUT);
 Serial.begin(9600);
}
void loop() 
{
 digitalWrite(trigPin,LOW);
 delayMicroseconds (2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds (10);
 digitalWrite(trigPin,LOW);
 duration = pulseIn(echoPin,HIGH);
 digitalWrite(trigPin,HIGH);
 distance = duration*0.034/2;
 Serial.print("Distance: ");
 Serial.println(distance);
 if (distance <=50)      //can be adjusted from 2cm to 400cm
 {
  digitalWrite(8,LOW); //LOW
  //delay(1000);            // can be adjusted
 }
 else
 {
  digitalWrite(8,HIGH);
  //delay(100);             // can be adjusted
 }
}
