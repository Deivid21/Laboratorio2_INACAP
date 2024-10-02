//Configuración de los motores.
//Motor 1
const int motorAPin1 = 3;  // Pin 13 de L293
const int motorAPin2 = 4;  // Pin 10 de L293

//Motor 2
const int motorBPin3 = 2; // Pin  7 de L293
const int motorBPin4 = 1;  // Pin  2 de L293

void setup()
{
  pinMode(motorAPin1, OUTPUT);
  pinMode(motorAPin2, OUTPUT);
  pinMode(motorBPin3, OUTPUT);
  pinMode(motorBPin4, OUTPUT);
  pinMode(8, OUTPUT); // Izquerda - Motor 1
  pinMode(9, OUTPUT); // Derecha - Motor 1
  pinMode(10, OUTPUT); // Izquerda - Motor 2
  pinMode(11, OUTPUT); // Derecha - Motor 2
}


void loop()
{
  // Derecha
  digitalWrite(motorAPin1, HIGH);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);

  // Izquerda
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, HIGH);
  digitalWrite(motorBPin3, HIGH);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(5000);
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);

  // Derecha - Izquerda
  digitalWrite(motorAPin1, HIGH);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, HIGH);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(5000);
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);

  // Izquerda - Derecha
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, HIGH);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(motorAPin1, LOW);
  digitalWrite(motorAPin2, LOW);
  digitalWrite(motorBPin3, LOW);
  digitalWrite(motorBPin4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);
}
