
  // Motor A
int in1 = 2; // Controla a direção do motor A
int in2 = 4; 
int enA = 3; //  Controla a velocidade do motor A

  // Motor B
int in3 = 6; // Controla a direção do motor B
int in4 = 7; 
int enB = 5; //  Controla a velocidade do motor B

void setup() {

  pinMode(enA, OUTPUT); // Define como saída
  pinMode(enB, OUTPUT); // Define como saída

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Movimento 0: 
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  
  delay(2000);
  
  
}

  
  void loop () { 

} 
