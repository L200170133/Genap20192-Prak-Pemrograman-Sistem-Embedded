int sensorPin = A0;
int ledPin11 = 11;
int ledPin10 = 10;
int ledPin9 = 9;
int ledPin6 = 6;
int ledPin5 = 5;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue >= 0 and sensorValue <= 200){
    digitalWrite(ledPin11, HIGH);
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin9, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
  }
  else if(sensorValue > 200 and sensorValue <= 400){
    digitalWrite(ledPin10, HIGH);
    digitalWrite(ledPin11, LOW);
    digitalWrite(ledPin9, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
  }

  else if(sensorValue > 400 and sensorValue <= 600){
    digitalWrite(ledPin9, HIGH);
    digitalWrite(ledPin11, LOW);
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
  }

  else if(sensorValue > 600 and sensorValue <= 800){
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin11, LOW);
    digitalWrite(ledPin9, LOW);
    digitalWrite(ledPin10, LOW);
    digitalWrite(ledPin5, LOW);
  }

  else if(sensorValue > 800){
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin11, LOW);
    digitalWrite(ledPin9, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin10, LOW);
  }
}
