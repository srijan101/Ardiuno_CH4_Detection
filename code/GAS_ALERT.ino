#include <LiquidCrystal_I2C.h>       
LiquidCrystal_I2C lcd(0x27,16,2);  //for 16x2 lcd display

int buzzer = 13;
int GASA0 = A0;
int gasvalue;


void setup() {
  
 lcd.init();     // initiate the lcd                  
 lcd.init();
 lcd.backlight(); 
 Serial.begin(9600);
 pinMode(buzzer, OUTPUT); 
 lcd.setCursor(2,2);
 lcd.print("Please Subscribe"); 
 lcd.setCursor(2,0);
 lcd.print("   TECH-HUB"); 
    
}

void loop() {
  int analogSensor = analogRead(GASA0);
  int gasvalue=(analogSensor-50)/35;       //gas module sensitivity
  
  lcd.setCursor(2,0);
  lcd.print("GAS Level:");
  lcd.setCursor(13,0);
  lcd.print(gasvalue);
  lcd.setCursor(15,0);
  lcd.print("%");
  
  // Checks if it has reached the threshold value
  if (gasvalue >= 10)              //gas percentage alert
  {
    lcd.setCursor(3,2);
  lcd.print("FART Detected !!");
     digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
  digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90);
  digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90);
  digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90);
         digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90);
  digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90);
         digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90);
  digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90); 
       digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(90);                       // wait for a second
  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  delay(90);
  
  
  
  
  }
  else
  {
  lcd.setCursor(5,2);
  lcd.print("NORMAL");
    noTone(buzzer);
    
  }
  delay(500);
  lcd.clear();
}
