/**********************************************************************************
**                                                                               **
**                            Cruïlla de semàfors                                **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte semaforAR = 7;         
const byte semaforAT = 8;         
const byte semaforAV = 9;          
const byte semaforBR = 10;        
const byte semaforBT = 11;       
const byte semaforBV = 12;       
unsigned long pausa = 700;           
//********** Setup ****************************************************************
void setup()
{
  pinMode(semaforAR, OUTPUT);   
  pinMode(semaforAT, OUTPUT);    
  pinMode(semaforAV, OUTPUT);
  pinMode(semaforBR, OUTPUT);     
  pinMode(semaforBT, OUTPUT);     
  pinMode(semaforBV, OUTPUT);     
  
  digitalWrite(semaforAR, HIGH);   
  digitalWrite(semaforAT, LOW);    
  digitalWrite(semaforAV, LOW);    
  digitalWrite(semaforBR, LOW);    
  digitalWrite(semaforBT, LOW);    
  digitalWrite(semaforBV, LOW);    
  
  delay(pausa);                    
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(semaforBR, LOW);    
  digitalWrite(semaforBV, HIGH);    
  
  delay(4*pausa);                  
  
  digitalWrite(semaforBV, LOW);     
  digitalWrite(semaforBT, HIGH);   
  
  delay(pausa);                    
  
  digitalWrite(semaforBT, LOW);     
  digitalWrite(semaforBR, HIGH);    
   
  delay(pausa);                   
  
  digitalWrite(semaforAR, LOW);    
  digitalWrite(semaforAV, HIGH);    
  delay(4*pausa);                  
  
  digitalWrite(semaforAV, LOW);     
  digitalWrite(semaforAT, HIGH);   
  
  delay(pausa);                   
  
  digitalWrite(semaforAT, LOW);    
  digitalWrite(semaforAR, HIGH);   
  
   delay(pausa);                    
}

//********** Funcions *************************************************************
