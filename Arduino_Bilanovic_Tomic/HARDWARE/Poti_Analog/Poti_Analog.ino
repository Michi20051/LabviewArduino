int ledUnten = 6;
int ledOben = 7;
int ledLinks = 8;
int ledRechts = 9;
int sensorWertX = 0;
int sensorWertY = 0;
int eingang = A0; 
int eingang1 = A1; 

void setup() {
  // Definieren der LEDs
  pinMode(ledUnten, OUTPUT);
  pinMode(ledOben, OUTPUT);
  pinMode(ledLinks, OUTPUT);
  pinMode(ledRechts, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorWertX = analogRead(eingang);
  Serial.print("X:"); 
  Serial.print(sensorWertX, DEC); 
    if (sensorWertX > 1010) 
      { 
        digitalWrite(ledLinks, HIGH); 
      }
      
    if (sensorWertX < 1010) 
      { 
        digitalWrite(ledLinks, LOW); 
      }

    if (sensorWertX < 20)
       {
         digitalWrite(ledRechts, HIGH);
       }

    if (sensorWertX > 20) 
      { 
        digitalWrite(ledRechts, LOW); 
      }

  sensorWertY = analogRead(eingang1);
  Serial.print("Y:");
  Serial.print(sensorWertY, DEC);
  Serial.print("\n");
    if(sensorWertY > 1010)
      {
        digitalWrite(ledOben, HIGH);
      }

    if(sensorWertY > 1010)
      {
        digitalWrite(ledUnten, LOW);
      }

    if(sensorWertY > 20)
      {
        digitalWrite(ledUnten, LOW);
      }

    if(sensorWertY < 20)
      {
        digitalWrite(ledUnten, HIGH);
      }

  delay(100); 
}
