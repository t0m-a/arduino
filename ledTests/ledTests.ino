void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  
  digitalWrite(13, HIGH); 
  delay(100);              
  digitalWrite(13, LOW);   
  delay(500);

  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
    
  digitalWrite(12, HIGH); 
  delay(500);              
  digitalWrite(12, LOW);   
  delay(200);

  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  
  digitalWrite(11, HIGH); 
  delay(1500);              
  digitalWrite(11, LOW);   
  delay(25);

  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);
  
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);
}
