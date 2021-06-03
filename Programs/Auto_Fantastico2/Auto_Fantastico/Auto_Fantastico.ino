/* Practica N°1 Auto fantastico 
 * Este programa visualiza una secuencia de prendido y apagado de LEDs
 * Codigo optimizado.
*/
int T =200;
void setup()
    {
     pinMode (2, OUTPUT);
     pinMode (3, OUTPUT);
     pinMode (4, OUTPUT);
     pinMode (5, OUTPUT);
     pinMode (6, OUTPUT);
    }

void loop()
    {
      for(int i=2; i<=6; i++)
          {
           digitalWrite(i, HIGH);
           delay(T);
           digitalWrite(i, LOW);
          }
      for(int i=5; i>=2; i--)
          {
           digitalWrite(i, HIGH);
           delay(T);
           digitalWrite(i, LOW);
          } 
    } 
      
     
    
