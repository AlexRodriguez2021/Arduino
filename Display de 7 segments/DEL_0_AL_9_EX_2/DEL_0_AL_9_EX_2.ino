/**********************************************************************************
**                                                                               **
**                             NOM AMB DISPLAY                                   **
**                             ALEX RODRIGUEZ                                    **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11; 
const byte segdot = 12; 
long int t = 700;
long int a = 750;  // temps nomes per al punt del display.

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
}

//********** Loop *****************************************************************
void loop()
{
      //ESTE ES PARA HACER EL 0
  
  digitalWrite(segA, LOW);     // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);    // ARRIBA DERECHA
  digitalWrite(segE, HIGH);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);    // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos

    //ESTE ES PARA HACER EL 1
  
  digitalWrite(segA, LOW);    // MEDIO CENTRO
  digitalWrite(segB, LOW);    // ARRIBA IZQUIERDA
  digitalWrite(segC, LOW);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, LOW);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos

    //ESTE ES PARA HACER EL 2
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, LOW);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, HIGH);    //  ABAJO IZQUIERDA
  digitalWrite(segF, LOW);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos

    //ESTE ES PARA HACER EL 3
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, LOW);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos
  
    //ESTE ES PARA HACER EL 4
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, LOW);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, LOW);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos

    //ESTE ES PARA HACER EL 5
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, LOW);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos

  
    //ESTE ES PARA HACER EL 6
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, LOW);    // MEDIO ARRIBA
  digitalWrite(segD, LOW);   // ARRIBA DERECHA
  digitalWrite(segE, HIGH);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos

      //ESTE ES PARA HACER EL 7
  
  digitalWrite(segA, LOW);    // MEDIO CENTRO
  digitalWrite(segB, LOW);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, LOW);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos
  
      //ESTE ES PARA HACER EL 8
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, HIGH);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, HIGH);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos

     //ESTE ES PARA HACER EL 9
  
  digitalWrite(segA, HIGH);    // MEDIO CENTRO
  digitalWrite(segB, HIGH);    // ARRIBA IZQUIERDA
  digitalWrite(segC, HIGH);    // MEDIO ARRIBA
  digitalWrite(segD, HIGH);   // ARRIBA DERECHA
  digitalWrite(segE, LOW);    //  ABAJO IZQUIERDA
  digitalWrite(segF, HIGH);   // ABAJO DERECHA
  digitalWrite(segG, LOW);    // MEDIO ABAJO
    digitalWrite(segdot, LOW);    // PUNTO
  
  delay(t);                  // es queden leds tms encesos



}
  
//********** Funcions *************************************************************
