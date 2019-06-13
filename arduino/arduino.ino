/*
 */
 
int xPin = A1;
int yPin = A0;
int buttonPin = 2;

int xPosition = 0;
int yPosition = 0;
int buttonState = 0;

void setup() {
  // inicializar las comunicaciones en serie a 9600 bps:
  Serial.begin(9600); 
  
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  //activar resistencia pull-up en el pin pulsador 
  pinMode(buttonPin, INPUT_PULLUP); 
  

  
}

void loop() {
    if (digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonState = digitalRead(buttonPin);
  
  Serial.print("X: ");
  Serial.print(xPosition);
  Serial.print(" | Y: ");
  Serial.print(yPosition);
  Serial.print(" | Button: ");
  Serial.println(buttonState);
  

  delay(100); // añadir un poco de retraso entre lecturas
}
