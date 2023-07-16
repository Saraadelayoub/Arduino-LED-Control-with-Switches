# define red1 3
# define Green1 5
# define red2 6
# define Green2 9
# define slideSwitch1 10
# define slideSwitch2 11
int switch1=0;
int switch2=0;
void setup()
{
  pinMode(red1,OUTPUT);
  pinMode(Green1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(Green2,OUTPUT);
  pinMode(slideSwitch1,INPUT);
  pinMode(slideSwitch2,INPUT);
}

void loop()
{
  switch1=digitalRead(10);
  switch2=digitalRead(11);
  if(switch1==HIGH){
    analogWrite(red1,128);
    analogWrite(Green1,255);
  }else{
    analogWrite(red1,LOW);
    analogWrite(Green1,LOW);    
  }
   if(switch2==HIGH){
    analogWrite(red2,128);
    analogWrite(Green2,255);
  }else{
    analogWrite(red2,LOW);
    analogWrite(Green2,LOW);    
  }
  delay(500);
}