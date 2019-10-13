int led=13;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int j=1;j<=1000;j=j++)
  {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1*j);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  }
}
