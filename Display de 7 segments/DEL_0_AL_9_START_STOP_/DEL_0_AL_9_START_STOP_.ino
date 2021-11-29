/**********************************************************************************
**                                                                               **
**                             Display de 7 segments                             **
**                                                                               **
**                                 ALEX RODRIGUEZ                                **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int segA = 5;          // donar nom al pin 5 de l’Arduino
const int segB = 6;          // donar nom al pin 6 de l’Arduino
const int segC = 7;          // donar nom al pin 7 de l’Arduino
const int segD = 8;          // donar nom al pin 8 de l’Arduino
const int segE = 9;          // donar nom al pin 9 de l’Arduino
const int segF = 10;         // donar nom al pin 10 de l’Arduino
const int segG = 11;         // donar nom al pin 11 de l’Arduino
const int buttonPin = 2;     // donar nom al pin 2 de l’Arduino
boolean buttonEstat = HIGH;   // definir variable d'estat pel polsador
boolean buttonEstatPrevi = HIGH;

int num = 0;                 // definir variable del número a mostrar

//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(buttonPin, INPUT);      // definir el pin 2 com una entrada
  
  digitalWrite(segA, LOW);     // posar a 0V el pin 5
  digitalWrite(segB, LOW);     // posar a 0V el pin 6
  digitalWrite(segC, LOW);     // posar a 0V el pin 7
  digitalWrite(segD, LOW);     // posar a 0V el pin 8
  digitalWrite(segE, LOW);     // posar a 0V el pin 9
  digitalWrite(segF, LOW);     // posar a 0V el pin 10
  digitalWrite(segG, LOW);     // posar a 0V el pin 11  
}

//********** Loop *****************************************************************
void loop()
{ 
  delay(700);    // per evitar que en una pulsació curta salti més d'un número
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat != buttonEstatPrevi)
  { 
    buttonEstatPrevi = buttonEstat;
  }
  if (buttonEstatPrevi == HIGH)
  {
    num = num + 1;              // incrementar el número a mostrar
    if (num == 10) num = 0;     // si s'ha superat 9 tornar a 0     
  }
  switch(num)
  {
    case 0:
      //ESTE ES PARA HACER EL 0
  
  digitalWrite(segA, LOW);     // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);    // ARRIBA DERECHA
  digitalWrite(segE, HIGH);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);    // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO

      break;
    case 1:   
      //ESTE ES PARA HACER EL 1
  
  digitalWrite(segA, LOW);    // MEDIO CENTRO
  digitalWrite(segB, LOW);    // ARRIBA IZQUIERDA
  digitalWrite(segC, LOW);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, LOW);    // MEDIO ABAJO
      break;
    case 2:  
     //ESTE ES PARA HACER EL 2
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, LOW);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, HIGH);    //  ABAJO IZQUIERDA
  digitalWrite(segF, LOW);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
      break;  
    case 3:        
     //ESTE ES PARA HACER EL 3
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, LOW);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
      break;  
    case 4:   
      //ESTE ES PARA HACER EL 4
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, LOW);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, LOW);    // MEDIO ABAJO
      break;  
    case 5:        
     //ESTE ES PARA HACER EL 5
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, LOW);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
      break;  
    case 6:            
      //ESTE ES PARA HACER EL 6
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, LOW);    // MEDIO ARRIBA
  digitalWrite(segD, LOW);   // ARRIBA DERECHA
  digitalWrite(segE, HIGH);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
      break;  
    case 7:             
    //ESTE ES PARA HACER EL 7
  
  digitalWrite(segA, LOW);    // MEDIO CENTRO
  digitalWrite(segB, LOW);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, LOW);    // MEDIO ABAJO
      break;  
    case 8:          
        //ESTE ES PARA HACER EL 8
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, HIGH);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
      break;  
    case 9:            
    //ESTE ES PARA HACER EL 9
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, LOW);    // MEDIO ABAJO
      break;  
  }    
}

//********** Funcions *************************************************************
