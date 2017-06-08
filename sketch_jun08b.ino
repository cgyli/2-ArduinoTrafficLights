//define pins
int red = 10;
int yellow = 9;
int green = 8;
int button = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);  // button may be loose sometimes, may need to press several times for HIGH
}

void loop() {
  // put your main code here, to run repeatedly:
  changeLights();
  delay(8000);
   }

void changeLights(){
  for (int i=0; i<10; i++){ //flashing green for 10 times before normally changing lights 
    if(digitalRead(button) == (HIGH)){  //detecting pedestrian button 
       pedestrianFirst();
       delay(8000);
       i=0;
    }
    // flashing green lights continue as planned
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
// If pedestrian button is detected
void pedestrianFirst(){
  for (int x=0; x<4; x++){
   
    // quick flashing green lines for 3 times before turning yellow/red
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    delay(500);
    digitalWrite(green, LOW);
    delay(500);
  }

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


