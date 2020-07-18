const int pm13 = 13;
const int pm12 = 12;
const int pm11 = 11;
const int pm10 = 10;
const int pm9 = 9;
const int bp = 2;

int buttonState = 0;

void setup()
{
  pinMode(pm13, OUTPUT);
  pinMode(pm12, OUTPUT);
  pinMode(pm11, OUTPUT);
  pinMode(pm10, OUTPUT);
  pinMode(pm9, OUTPUT);
  pinMode(bp, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(bp);
  
  if(buttonState == HIGH){
    digitalWrite(pm13, LOW);
    digitalWrite(pm12, HIGH);
    digitalWrite(pm11, LOW);
    digitalWrite(pm10, HIGH);
    digitalWrite(pm9, LOW);
  }
  else{
    digitalWrite(pm13, HIGH);
    digitalWrite(pm12, LOW);
    digitalWrite(pm11, HIGH);
    digitalWrite(pm10, LOW);
    digitalWrite(pm9, HIGH);
  }
}
