int ledRed = 13;
int ledYellow = 12;
int ledGreen = 11;
int greenButton = 2;
int yellowButton = 3;
int redButton = 4;
int redButtonState;
int greenButtonState;
int yellowButtonState;
int redButtonStateReset = 0;
int greenButtonStateReset = 0;
int yellowButtonStateReset = 0;


boolean redOn = true;
boolean yellowOn = true;
boolean greenOn = true;

void setup() {                

  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(greenButton, INPUT);
  pinMode(greenButton, INPUT);
  pinMode(greenButton, INPUT);
  Serial.begin(9600);
}


void loop() {

  lightsOn();
  lightsOff();
  whatTheButton();
 
  
  redButtonState = digitalRead(redButton);
  yellowButtonState = digitalRead(yellowButton);
  greenButtonState = digitalRead(greenButton);
  

  Serial.print("Red Button State: ");  
  Serial.println(redButtonState);
  Serial.println();
  Serial.print("Yellow Button State: ");  
  Serial.println(yellowButtonState);
  Serial.println();
  Serial.print("Green Button State: ");  
  Serial.println(greenButtonState);
  Serial.println();
  
 
  
}

void lightsOn() {
  
  if (redOn == true) digitalWrite(ledRed, HIGH);
  if (yellowOn == true) digitalWrite(ledYellow, HIGH);
  if (greenOn == true) digitalWrite(ledGreen, HIGH);
  
}

void lightsOff() {
  
  if (redOn == false) digitalWrite(ledRed, LOW);
  if (yellowOn == false) digitalWrite(ledYellow, LOW);
  if (greenOn == false) digitalWrite(ledGreen, LOW);
  
}

