/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************

//********** Variables ************************************************************


const int led0 = 8;          // donar nom al pin 5 de l’Arduino
const int led1 = 9;          // donar nom al pin 6 de l’Arduino
const int led2 = 10;          // donar nom al pin 7 de l’Arduino
const int led3 = 11;          // donar nom al pin 8 de l’Arduino
const int led4 = 12;          // donar nom al pin 9 de l’Arduino

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
 pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  
}

//********** Loop *****************************************************************
void loop()  // we need this to be here even though its empty
{
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, LOW);    // posar a 5V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);    // posar a 5V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9

delay(200);                  // es queden leds 500ms encesos

   
  digitalWrite(led0, LOW);    // posar a 5V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);    // posar a 5V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);    // posar a 5V el pin 9
 
delay(200);                  // es queden leds 500ms encesos
}
//********** Funcions *************************************************************
