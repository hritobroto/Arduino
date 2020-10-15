
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
  attachInterrupt(digitalPinToInterrupt(button1), btn1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(button2), btn2, CHANGE);
}

void loop() 
{
  delay(100);
}
void btn1()
{
  digitalWrite(led1, HIGH);
}
void btn1()
{
  digitalWrite(led2, HIGH);
}
}
