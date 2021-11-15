/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                              Alex Rodriguez                                   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led0 = 5;         
const byte led1 = 6;       
const byte led2 = 7;         
const byte led3 = 8;          
const byte led4 = 9;         
const byte led5 = 10;         
const byte led6 = 11;        
const byte led7 = 12;         
int temps=60;                // definir variable de temps en ms   

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
  pinMode(led6, OUTPUT);    
  pinMode(led7, OUTPUT);   
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);  
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);   
  digitalWrite(led4, LOW);   
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);    
  digitalWrite(led7, HIGH);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, HIGH);     
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);     
  digitalWrite(led5, LOW);     
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);     
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, LOW);   
  digitalWrite(led1, HIGH);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);   
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, LOW);     
  digitalWrite(led1, LOW);     
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, HIGH);     
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    
  digitalWrite(led6, LOW);     
  digitalWrite(led7, LOW);     
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);   
  digitalWrite(led4, HIGH);   
  digitalWrite(led5, LOW);   
  digitalWrite(led6, LOW);    
  digitalWrite(led7, LOW);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);     
  digitalWrite(led2, LOW);     
  digitalWrite(led3, LOW);     
  digitalWrite(led4, HIGH);     
  digitalWrite(led5, HIGH);     
  digitalWrite(led6, LOW);     
  digitalWrite(led7, LOW);     
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, LOW);   
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);   
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH);   
  digitalWrite(led6, HIGH);    
  digitalWrite(led7, LOW);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
  
  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);   
  digitalWrite(led6, HIGH);  
  digitalWrite(led7, HIGH);    
  
  delay(temps);                  // Els led's van a una velocitat de 200ms
}

//********** Funcions *************************************************************
