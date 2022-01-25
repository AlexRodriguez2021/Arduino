/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                               Alex Rodriguez                                  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
const byte pot1 = A1;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  0
int valPot1;                 // guardar valor del potenciometre 1
//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre
  valPot1 = analogRead(pot1);    // llegir valor potenciòmetre   

  tone(xiulet, 400, valPot0);    // xiulet de durada valPot0
  delay(valPot0+valPot1);              // esperar valPot0 del xiulet + valPot0 silenci
}

//********** Funcions *************************************************************
