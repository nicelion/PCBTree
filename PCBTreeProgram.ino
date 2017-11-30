/* 
PCBTree.ino
by Ian Thompson

*/

int red = 1;
int green = 2;
int pot = A3;

int lowMap = 50;
int highMap = 500; 

int del = 1.25;

void setup() {

  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(pot, INPUT);

}

void loop() {

//
//  digitalWrite(2, HIGH);
//  delay(300);
//  digitalWrite(red, HIGH);
//  digitalWrite(2, LOW);
//  delay(300);
//  digitalWrite(red, LOW);
  
  int val = analogRead(pot);
  val = map(val, 0, 1023, lowMap, highMap);
//
//  digitalWrite(red, LOW);
//  delay(val);
//  digitalWrite(red, HIGH);
//  digitalWrite(green, LOW);
//  delay(val);
//  digitalWrite(green, HIGH); 
//
//    digitalWrite(red, LOW);
//    delay(val * 1.5);
//    digitalWrite(red, LOW);
//    delayMicroseconds(10);
//    digitalWrite(2, LOW);
//    delay(val * 1.5);
//    digitalWrite(2, LOW);


  if (val == lowMap) {
    
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    
  } else if (val == highMap) {
    
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    
  } else {
    digitalWrite(red, LOW);
    delay(val * del);
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    delay(val * del);
    digitalWrite(green, HIGH); 
    
  }

 
}


