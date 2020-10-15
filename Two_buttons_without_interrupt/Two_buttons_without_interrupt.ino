
const int button1=2;
const int led1= 13;
const int button2=3;
const int led2= 12;

int btnSt1=0;
int btnSt2=0;

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() 
{
  btnSt1=digitalRead(button1);
  btnSt2=digitalRead(button2);
  if(btnSt1==HIGH) 
  {
    digitalWrite(led1, HIGH);
  } 
  if(btnSt2==HIGH)
  {
    digitalWrite(led2, HIGH);
  }
  if(btnSt1==HIGH && btnSt2==HIGH)
  {
    digitalWrite(led2, HIGH);
  }
}
