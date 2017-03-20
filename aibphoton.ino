// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = D3;
int led = D7;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  
  // make the pushbutton's pin an input:
  pinMode(led, OUTPUT);
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  if(buttonState == 1){
      digitalWrite(led, HIGH);
      Particle.publish("Button","High",PUBLIC);
      delay(500);
  }
  else{
      digitalWrite(led, LOW);
  }
}
