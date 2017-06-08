//define pins
int red = 10;
int yellow = 9;
int green = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  changeLights(); //traffic light function
  delay(15000); //red light on duration
}

void changeLights(){
  // green lights on
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(5000);

  //yellow lights on
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);

  //red lights on
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
}

