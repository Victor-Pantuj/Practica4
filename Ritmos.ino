//Variables de pines
int buttonPin1 = 2;
int buttonPin2 = 3;
int ledPin1 = 4;
int ledPin2 = 5;
int ZumbadorPin = 6;
// Frecuencias en hdz
int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;

void setup() {
  // Definimos pines
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ZumbadorPin, OUTPUT);
}

void loop() {
  // Primera melodia (star wars)
  if (digitalRead(buttonPin1) == LOW) {
    digitalWrite(ledPin1, HIGH);
     tone(ZumbadorPin, a, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 500);
    delay(500+50);     
    tone(ZumbadorPin, a, 500); 
    delay(500+50);
    tone(ZumbadorPin, f, 350);  
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50); 
    
    tone(ZumbadorPin, a, 500);
    delay(500+50);
    tone(ZumbadorPin, f, 350);
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    tone(ZumbadorPin, a, 1000);   
    delay(1000+50);
   
    tone(ZumbadorPin, eH, 500);
    delay(500+50);
    tone(ZumbadorPin, eH, 500);
    delay(500+50);
    tone(ZumbadorPin, eH, 500); 
    delay(500+50);   
    tone(ZumbadorPin, fH, 350);
    delay(350+50); 
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    
    tone(ZumbadorPin, gS, 500);
    delay(500+50);
    tone(ZumbadorPin, f, 350);
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    tone(ZumbadorPin, a, 1000);
    delay(1000+50);
    
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 350);
    delay(350+50); 
    tone(ZumbadorPin, a, 150);
    delay(150+50);
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, gSH, 250); 
    delay(250+50);
    tone(ZumbadorPin, gH, 250);
    delay(250+50);
    
    tone(ZumbadorPin, fSH, 125);
    delay(125+50);
    tone(ZumbadorPin, fH, 125);
    delay(125+50);    
    tone(ZumbadorPin, fSH, 250);
    delay(250+50);
    delay(250);
    tone(ZumbadorPin, aS, 250);
    delay(250+50);    
    tone(ZumbadorPin, dSH, 500); 
    delay(500+50); 
    tone(ZumbadorPin, dH, 250); 
    delay(250+50); 
    tone(ZumbadorPin, cSH, 250);
    delay(250+50);  
    
    tone(ZumbadorPin, cH, 125);
    delay(125+50);  
    tone(ZumbadorPin, b, 125); 
    delay(125+50); 
    tone(ZumbadorPin, cH, 250); 
    delay(250+50);     
    delay(250);
    tone(ZumbadorPin, f, 125); 
    delay(125+50); 
    tone(ZumbadorPin, gS, 500); 
    delay(500+50); 
    tone(ZumbadorPin, f, 375); 
    delay(375+50); 
    tone(ZumbadorPin, a, 125);
    delay(125+50); 
    
    tone(ZumbadorPin, cH, 500); 
    delay(500+50);
    tone(ZumbadorPin, a, 375);  
    delay(375+50);
    tone(ZumbadorPin, cH, 125); 
    delay(125+50);
    tone(ZumbadorPin, eH, 1000); 
    delay(1000+50);
 
    
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 350); 
    delay(350+50);
    tone(ZumbadorPin, a, 150);
    delay(150+50);
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, gSH, 250);
    delay(250+50); 
    tone(ZumbadorPin, gH, 250);
    delay(250+50);
    
    tone(ZumbadorPin, fSH, 125);
    delay(125+50);
    tone(ZumbadorPin, fH, 125);  
    delay(125+50);  
    tone(ZumbadorPin, fSH, 250);
    delay(250+50);
    delay(250);
    tone(ZumbadorPin, aS, 250);  
    delay(250+50);  
    tone(ZumbadorPin, dSH, 500);  
    delay(500+50);
    tone(ZumbadorPin, dH, 250);  
    delay(250+50);
    tone(ZumbadorPin, cSH, 250);
    delay(250+50);  
 
    
    tone(ZumbadorPin, cH, 125);  
    delay(125+50);
    tone(ZumbadorPin, b, 125);  
    delay(125+50);
    tone(ZumbadorPin, cH, 250);
    delay(250+50);      
    delay(250);
    tone(ZumbadorPin, f, 250); 
    delay(250+50); 
    tone(ZumbadorPin, gS, 500); 
    delay(500+50); 
    tone(ZumbadorPin, f, 375);  
    delay(375+50);
    tone(ZumbadorPin, cH, 125); 
    delay(125+50);
           
    tone(ZumbadorPin, a, 500); 
    delay(500+50);           
    tone(ZumbadorPin, f, 375);  
    delay(375+50);          
    tone(ZumbadorPin, c, 125); 
    delay(125+50);  
    tone(ZumbadorPin, a, 1000);
    delay(1000+50);       
    digitalWrite(ledPin1, LOW);
  }
  // Segunda melodia (Notas Random/ Sin ningun orden)
  if (digitalRead(buttonPin2) == LOW) {
    digitalWrite(ledPin2, HIGH);
    tone(ZumbadorPin, 330, 250);
    delay(250);
    tone(ZumbadorPin, 262, 250);
    delay(250);
    tone(ZumbadorPin, 220, 250);
    delay(250);
    tone(ZumbadorPin, 262, 250);
    delay(250);
    tone(ZumbadorPin, 330, 250);
    delay(250);
    tone(ZumbadorPin, 330, 250);
    delay(250);
    tone(ZumbadorPin, 262, 250);
    delay(250);
    tone(ZumbadorPin, 220, 250);
    delay(250);
    tone(ZumbadorPin, 262, 250);
    delay(250);
    tone(ZumbadorPin, 330, 250);
    delay(250);
    noTone(ZumbadorPin);
    digitalWrite(ledPin2, LOW);
  }
}
