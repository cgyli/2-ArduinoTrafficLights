int red = 10;
int yellow = 9;
int green = 8;
// int button = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  //pinMode(button, INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  /*if (digitalRead(button) == (HIGH){
    delay(15); //software debounce
    if(digitalRead(button) == (HIGH){
      */
  changeLights();
  delay(15000);
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

