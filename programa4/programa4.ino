/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************

//********** Variables ************************************************************
const int led1 = 1;          
const int led2 = 2;          
const int led3 = 3;          
const int led4 = 4;         
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;    


//*************************************** SETUP *************************************
void setup()              
{
    
  DDRD = B11111111;

}

//************************************* LOOP *****************************************
void loop()  
{

   
  PORTD = B10000001;
  delay(500);
  
  PORTD = B11000011;
  delay(500);
   
  PORTD = B01100110;
  delay(500);
   
  PORTD = B00111100;
  delay(500);
   
  PORTD = B00011000;
  delay(500);

  PORTD = B00111100;
  delay(500);

  PORTD = B01100110;
  delay(500);

  PORTD = B11000011;
  delay(500);

  PORTD = B10000001;
  delay(500);
}
//*******************************************FUNCIONS******************************
