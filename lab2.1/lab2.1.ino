int led=13;
void setup() {
  // initialize serial communication at 9600 bits per second:
pinMode(led,OUTPUT);

  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
    digitalWrite(led, HIGH);
    delay(1000);


  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
    
  digitalWrite(led, LOW);    
    delay(1000);
  
}
