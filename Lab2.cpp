//Configuración de los motores.
//Motor 1
const int motorAPin1 = 3;  // Pin 13 de L293
const int motorAPin2 = 4;  // Pin 10 de L293
int led1Left = 8; // Izquerda - Motor 1
int led1Right = 9; // Derecha - Motor 1

//Motor 2
const int motorBPin3 = 2; // Pin  7 de L293
const int motorBPin4 = 1;  // Pin  2 de L293
int led2Left = 10; // Izquerda - Motor 2
int led2Right = 11; // Derecha - Motor 2

void setup()
{
  pinMode(motorAPin1, OUTPUT);
  pinMode(motorAPin2, OUTPUT);
  pinMode(motorBPin3, OUTPUT);
  pinMode(motorBPin4, OUTPUT);
  pinMode(led1Left, OUTPUT);
  pinMode(led1Right, OUTPUT);
  pinMode(led2Left, OUTPUT);
  pinMode(led2Right, OUTPUT);
}


void loop()
{
  // Derecha
  digitalWrite(motorAPin1, HIGH);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, HIGH);
  digitalWrite(led1Left, LOW);
  digitalWrite(led1Right, HIGH);
  digitalWrite(led2Left, LOW);
  digitalWrite(led2Right, HIGH);
  delay(5000);
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(led1Left, LOW);
  digitalWrite(led1Right, LOW);
  digitalWrite(led2Left, LOW);
  digitalWrite(led2Right, LOW);
  delay(1000);

  // Izquerda
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, HIGH);
  digitalWrite(motorBPin3, HIGH);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(led1Left, HIGH);
  digitalWrite(led1Right, LOW);
  digitalWrite(led2Left, HIGH);
  digitalWrite(led2Right, LOW);
  delay(5000);
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(led1Left, LOW);
  digitalWrite(led1Right, LOW);
  digitalWrite(led2Left, LOW);
  digitalWrite(led2Right, LOW);
  delay(1000);

  // Derecha - Izquerda
  digitalWrite(motorAPin1, HIGH);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, HIGH);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(led1Left, LOW);
  digitalWrite(led1Right, HIGH);
  digitalWrite(led2Left, HIGH);
  digitalWrite(led2Right, LOW);
  delay(5000);
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(led1Left, LOW);
  digitalWrite(led1Right, LOW);
  digitalWrite(led2Left, LOW);
  digitalWrite(led2Right, LOW);
  delay(1000);

  // Izquerda - Derecha
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, HIGH);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, HIGH);
  digitalWrite(led1Left, HIGH);
  digitalWrite(led1Right, LOW);
  digitalWrite(led2Left, LOW);
  digitalWrite(led2Right, HIGH);
  delay(5000);
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(led1Left, LOW);
  digitalWrite(led1Right, LOW);
  digitalWrite(led2Left, LOW);
  digitalWrite(led2Right, LOW);
  delay(1000);
}
