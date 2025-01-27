void setup() {
  // put your setup code here, to run once:
#define bin1 4
#define bin2 6
#define pwn 11


pinMode(bin1, OUTPUT);
pinMode(bin2, OUTPUT);
pinMode(pwn, OUTPUT);

}

void forwards(int speed);

void loop() {
  // put your main code here, to run repeatedly:

for(int i = 0; i<100; i+=3)
{
  forwards(i, .05);
}



digitalWrite(bin1, LOW);
delay(1000);


}

void forwards(int speed, float timeSeconds)
{
  float new_speed = map(speed, 0, 100, 50, 255);
  analogWrite(pwn, new_speed);
  digitalWrite(bin1, HIGH);
  digitalWrite(bin2, LOW);
  delay(timeSeconds*1000);
}


