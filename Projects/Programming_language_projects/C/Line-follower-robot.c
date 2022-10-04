//Code by Kushal Pareek
//C Language code for line-follower-robotic-car

int lm1=8;
int lm2=9;
int rm1=12;
int rm2=13;
int enl=10;
int enr=11;
int ir1=2;
int ir2=3;
int ir3=4;
int ir4=5;
int ir5=6;

void setup() {
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  pinMode(ir4,INPUT);
  pinMode(ir5,INPUT);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  pinMode(enr, OUTPUT);
  pinMode(enl, OUTPUT);

}



void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(ir1)==1  && digitalRead(ir2)==1 && digitalRead(ir3)==0 && digitalRead(ir4)==1 && digitalRead(ir5)==1 ) //11011
 {
  analogWrite(enl,55);
  analogWrite(enr,48.6);
  forward();
 }
 else if(digitalRead(ir1)==1  && digitalRead(ir2)==1 && digitalRead(ir3)==1 && digitalRead(ir4)==1 && digitalRead(ir5)==1 ) //11111
 {
  analogWrite(enl,55);
  analogWrite(enr,48.6);
  back();
 }
 else if(digitalRead(ir1)==0 && digitalRead(ir2)==0 && digitalRead(ir3)==0 && digitalRead(ir4)==1 && digitalRead(ir5)==1 ) //00011
 { forward();
 delay(50);
  if(digitalRead(ir1)==1  && digitalRead(ir2)==1 && digitalRead(ir3)==0 && digitalRead(ir4)==1 && digitalRead(ir5)==1 )
  {
    analogWrite(enl,55);
  analogWrite(enr,48.6);
    forward();
  }
 }
 else if(digitalRead(ir1)==1  && digitalRead(ir2)==1 && digitalRead(ir3)==0 && digitalRead(ir4)==0 && digitalRead(ir5)==0 ) //11000
 {analogWrite(enl,55);
  analogWrite(enr,48.6);
  right();
 }
 else if(digitalRead(ir1)==0 && digitalRead(ir2)==0 && digitalRead(ir3)==0 && digitalRead(ir4)==0 && digitalRead(ir5)==0 ) //00000
 {analogWrite(enl,55);
  analogWrite(enr,48.6);
  right();
 }
 else if(digitalRead(ir1)==1 && digitalRead(ir2)==1 && digitalRead(ir3)==0 && digitalRead(ir4)==0 && digitalRead(ir5)==1 ) //11001
 {analogWrite(enl,55);
  analogWrite(enr,48.6);
  right();
 }
 else if(digitalRead(ir1)==1 && digitalRead(ir2)==0 && digitalRead(ir3)==0 && digitalRead(ir4)==1 && digitalRead(ir5)==1 ) //10011
 {analogWrite(enl,55);
  analogWrite(enr,48.6);
  left();
 }
 else if(digitalRead(ir1)==1 && digitalRead(ir2)==1 && digitalRead(ir3)==1 && digitalRead(ir4)==0 && digitalRead(ir5)==1 ) //11101
 {analogWrite(enl,55);
  analogWrite(enr,48.6);
  right();
 }
 else if(digitalRead(ir1)==1 && digitalRead(ir2)==0 && digitalRead(ir3)==1 && digitalRead(ir4)==1 && digitalRead(ir5)==1 ) //10111
 {analogWrite(enl,55);
  analogWrite(enr,48.6);
  left();
 }

 else if(digitalRead(ir1)==1 && digitalRead(ir2)==1 && digitalRead(ir3)==1 && digitalRead(ir4)==0 && digitalRead(ir5)==0 ) //11100
 {analogWrite(enl,55);
  analogWrite(enr,48.6);
  right();
 }
 else if(digitalRead(ir1)==0 && digitalRead(ir2)==0 && digitalRead(ir3)==1 && digitalRead(ir4)==1 && digitalRead(ir5)==1 ) //00111
 {analogWrite(enl,55);
  analogWrite(enr,48.6);
  left();
 }
 
 
}
void forward()
{ 
  
  digitalWrite(lm1,1);     // If I want to move forward
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
}
void STOP()
{
   digitalWrite(lm1,1);     // If I want to stop
  digitalWrite(lm2,1);
  digitalWrite(rm1,1);
  digitalWrite(rm2,1);
}

  void right()
{ 
  digitalWrite(lm1,1);     // If I want to move right
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0);
}
void left()
{
  digitalWrite(lm1,0);     // If I want to move LEFT
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1); 
}
void back()
{
  digitalWrite(lm1,0);     // If I want to move LEFT
  digitalWrite(lm2,1);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1); 
}
