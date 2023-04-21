//Variables
#define FOCO 5
#define LDR A0
int valorLDR;

void setup() {
  // definimos pines y el monitor serial
 pinMode(FOCO, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // Valores que se costraran en el monitor serial, definimos rango de valor con el que funcionara
 valorLDR = analogRead(LDR);
 Serial.println(valorLDR);
 if(valorLDR < 50){
 digitalWrite(FOCO, HIGH);
 }
 else{
 digitalWrite(FOCO, LOW);
 }
 delay(2000);
}