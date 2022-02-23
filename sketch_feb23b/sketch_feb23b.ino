int ENA = 10;
int IN1 = 9;
int IN2 = 8;
int IN3 = 7;
int IN4 = 6;
int ENB = 5;

void setup(){

  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
}

void adelante (int vel){

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW); 
  analogWrite(ENA, vel); 

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW); 
  analogWrite(ENB, vel); 
}

void atras (int vel){

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH); 
  analogWrite(ENA, vel);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH); 
  analogWrite(ENB, vel); 
}

void derecha (int vel){

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW); 
  analogWrite(ENA, vel); 

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH); 
  analogWrite(ENB, vel); 
}

void izquierda (int vel){

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH); 
  analogWrite(ENA, vel); 
 
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW); 
  analogWrite(ENB, vel); 
}

void loop(){

  adelante(120);
  delay(2000);
  adelante(0);
  delay(500);
  atras(120);
  delay(2000);
  atras(0);
  delay(500);
  derecha(120);
  delay(2000);
  derecha(0);
  delay(500);
  izquierda(120);
  delay(2000);
  izquierda(0);
  delay(500);
}
