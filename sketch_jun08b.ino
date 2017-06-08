int red = 10;
int yellow = 9;
int green = 8;
int button = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  changeLights();
  if(digitalRead(button) == (HIGH)){
       pedestrianFirst();
       delay(8000);
  }
  delay(8000);
   }

void changeLights(){
  for (int i=0; i<10; i++){
    
    // flashing green lights on
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(1000);
    digitalWrite(green, LOW);
    delay(1000);
  }
  //yellow lights on
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);

  //red lights on
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  
}

void pedestrianFirst(){
  for (int x=0; x<4; x++){
   
    // flashing green lights on
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(1000);
    digitalWrite(green, LOW);
    delay(1000);
  }

  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(3000);
    
  //yellow lights on
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);

  //red lights on
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  
}
