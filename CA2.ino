int ldr=0;
int led=1;
int xyz=0;

void setup() 
{
  pinMode(ldr, INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  xyz=digitalRead(ldr);
  
  if(xyz==1)
  {
    digitalWrite(led,LOW); 
  }

  if(xyz==0)
  {
    digitalWrite(led,HIGH);
  }
}
