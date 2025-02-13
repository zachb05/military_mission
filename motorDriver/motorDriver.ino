void drive(int direction, int speed);

void setup() {
  // put your setup code here, to run once:
  #define bin1 22
  #define bin2 19
  #define pwn 4


  pinMode(bin1, OUTPUT);
  pinMode(bin2, OUTPUT);
  pinMode(pwn, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*    analogWrite(pwn, 255);
    digitalWrite(bin1, HIGH);
    digitalWrite(bin2, LOW);
  */

  for(int i = 0; i<100; i+=3)
  {
    drive(1, i);
  }

  for(int i = 0; i<100; i+=3)
  {
    drive(-1, i);
  }

  digitalWrite(bin1, LOW);
  delay(1000);

}


void drive(int direction, int speed) {
  float new_speed = map(speed, 0, 100, 50, 255);
 
  if(direction == 1)//forwards
  { 
    analogWrite(pwn, new_speed);
    digitalWrite(bin1, HIGH);
    digitalWrite(bin2, LOW);
  }
  else if(direction == -1)//backwards
  {
    analogWrite(pwn, new_speed);
    digitalWrite(bin1, LOW);
    digitalWrite(bin2, HIGH);
  }
  else  
  {
    analogWrite(pwn, new_speed);
    digitalWrite(bin1, LOW);
    digitalWrite(bin2, LOW);
  }
}


