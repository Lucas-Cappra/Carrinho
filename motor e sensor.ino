
  // Motor A
int in1 = 2; // Controla a direção do motor A
int in2 = 4; 
int enA = 3; //  Controla a velocidade do motor A

  // Motor B
int in3 = 7; // Controla a direção do motor B
int in4 = 5; 
int enB = 6; //  Controla a velocidade do motor B

  // Sensor Ultrassônico
int trig = 13;
int echo = 12;

float distancia;  


void setup() {

  pinMode (trig, OUTPUT); // Define o sensor trig como saída
  pinMode (echo,INPUT); // Define o sensor trig como entrada
  Serial.begin (9600);

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
  digitalWrite(trig, LOW);
  delay(0005);
  digitalWrite(trig, HIGH);
  delay(0010);
  digitalWrite(trig, LOW);
  
  distancia = pulseIn (echo, HIGH);
  distancia = distancia/58;
  Serial.println (distancia);


   // Movimento Avançar
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  
  digitalWrite(enA, 50);
  digitalWrite(enB, 50);

    // Movimento de Parada
  if (distancia <=20) {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  delay(500); //0.02s
    
  // Movimento de Ré
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  digitalWrite(enA, 10);
  digitalWrite(enB, 10);
  delay(440); // 0.44s

  
  // Movimento de Virar
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  
  digitalWrite(enA, 1);
  digitalWrite(enB, 1);
  delay(330); // 0.33s
    }
  
} 
