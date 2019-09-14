#define sensor A0
#define led 13

void setup()  {
pinMode(sensor,INPUT);
pinMode(led, OUTPUT);
}

void loop() {
if (analogRead(sensor) <= 300) {
digitalWrite(led, HIGH);
}

}
