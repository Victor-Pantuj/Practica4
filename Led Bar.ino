// Variales
int secuencia = 1;
int pulsador1 = 2;
int pulsador2 = 3;
int pulsador3 = 4;
int pulsador4 = 5;
int estado1 = LOW;
int estado2 = LOW;
int estado3 = LOW;
int estado4 = LOW;
// Donde se usan las variables
void setup() {
  pinMode(pulsador1, INPUT_PULLUP);
  pinMode(pulsador2, INPUT_PULLUP);
  pinMode(pulsador3, INPUT_PULLUP);
  pinMode(pulsador4, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  estado1 = digitalRead(pulsador1);
  estado2 = digitalRead(pulsador2);
  estado3 = digitalRead(pulsador3);
  estado4 = digitalRead(pulsador4);
  //Como funciona
  if (estado1 == LOW) {
    secuencia = 1;
  }
  if (estado2 == LOW) {
    secuencia = 2;
  }
  if (estado3 == LOW) {
    secuencia = 3;
  }
  if (estado4 == LOW) {
    secuencia = 4;
  }
  //Accionar la secuencia
  switch (secuencia) {
    case 1:
      mostrar_secuencia_1();
      break;
    case 2:
      mostrar_secuencia_2();
      break;
    case 3:
      mostrar_secuencia_3();
      break;
    case 4:
      mostrar_secuencia_4();
      break;
  }
}
// Secuencia 1
void mostrar_secuencia_1() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    delay(1000);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    delay(1000);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    delay(1000);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    delay(1000);
}
}
//Secuencia 2
void mostrar_secuencia_2() {
for (int i = 0; i < 4; i++) {
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
delay(1000);
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
delay(1000);
}
}
// Scuencia 3
void mostrar_secuencia_3() {
for (int i = 0; i < 4; i++) {
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);
delay(1000);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);
digitalWrite(11, LOW);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, HIGH);
digitalWrite(11, HIGH);
delay(1000);
}
}
//secuencia 4
void mostrar_secuencia_4() {
for (int i = 0; i < 4; i++) {
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
delay(1000);
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
delay(1000);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
digitalWrite(11, LOW);
delay(1000);
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
digitalWrite(10, LOW);
digitalWrite(11, HIGH);
delay(1000);
}
}