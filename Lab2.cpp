//
// For more support see: https://t.me/Deivid21Hub
//
// Copyright (C) 1996 - 2024 INACAP
// Copyright (C) 2017 - 2024 Deivid Ignacio Parra (Deivid21)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include <DHT.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>

// const int senue = A0;
#define DHTPIN A0
#define DHTTYPE DHT22

LiquidCrystal_I2C lcd_1(0x27,16,2);
DHT dht_1(DHTPIN, DHTTYPE);

// Motor 1
const int motor1Pin1 = 4; // Pin 13 - L293
const int motor1Pin2 = 5; // Pin 10 - L293
int led1Left = 6; // Izquerda - Motor 1

// Sensor 1
int ECO1 = 3;
int TRIG1 = 2;
int DURACION1;
int DISTANCIA1;

void setup() {
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(ECO1, INPUT);
  pinMode(TRIG1, OUTPUT);
  pinMode(led1Left, OUTPUT);
  lcd_1.init();
  lcd_1.backlight();
  lcd_1.clear();
  lcd_1.setCursor(3, 0);
  lcd_1.print("Bienvenido");
  lcd_1.setCursor(0, 1);
  lcd_1.print("Inicializando...");
  Serial.begin(9600);
  Serial.println("Loading...");
  dht_1.begin();
  delay(2000);
}

void loop() {
  // int temperature = analogRead(senue);
  // float millivolts = (temperature * 5) / 1023.0;
  // float celsius = millivolts * 100; 
  // Serial.print(celsius);
  // Serial.println(" C");
  float humidity = dht_1.readHumidity();
  float temperature = dht_1.readTemperature();
  float fahrenheit = dht_1.readTemperature(true);
  digitalWrite(TRIG1, HIGH);
  delay(100);
  digitalWrite(TRIG1, LOW);
  DURACION1 = pulseIn(ECO1, HIGH);
  DISTANCIA1 = DURACION1 / 58,2;

  // Depuracion
  Serial.print("Distancia: ");
  Serial.print(DISTANCIA1);
  Serial.print(" cm     ");
  Serial.print("Humedad: ");
  Serial.print(humidity);
  Serial.print(" %     ");
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.print(" °C  -  ");
  Serial.print(fahrenheit);
  Serial.println(" °F");

  // Lectura de Temperatura
  lcd_1.init();
  lcd_1.backlight();
  lcd_1.clear();
  lcd_1.setCursor(2, 0);
  lcd_1.print("Temperatura:");
  lcd_1.setCursor(4, 1);
  lcd_1.print(temperature);
  lcd_1.println(" C     ");
  delay(3000);

  if (DISTANCIA1 <= 15 && DISTANCIA1 >= 5) {
    digitalWrite(led1Left, HIGH);
  	delay(250);
  	digitalWrite(led1Left, LOW);
    delay(250);
  }

  if (DISTANCIA1 <= 15 && DISTANCIA1 >= 5) {
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
    lcd_1.clear();
    lcd_1.setCursor(3, 0);
    lcd_1.print("Distancia:");
    lcd_1.setCursor(6, 1);
    lcd_1.print(DISTANCIA1);
    lcd_1.println(" cm      ");
    delay(2000);
  }
  else if (temperature <= 35 && temperature >= 27) {
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
    lcd_1.clear();
    lcd_1.setCursor(0, 0);
    lcd_1.print("Temperatura Alta");
    lcd_1.setCursor(3, 1);
    lcd_1.print("Enfriando");
    delay(2000);
  }
  else {
    digitalWrite(motor1Pin1, LOW);
  	digitalWrite(motor1Pin2, LOW);
  	digitalWrite(led1Left, LOW);
  	lcd_1.clear();
    lcd_1.setCursor(3, 0);
  	lcd_1.print("Ventilador");
    lcd_1.setCursor(4, 1);
  	lcd_1.print("Detenido");
    delay(2000);
  }
}
