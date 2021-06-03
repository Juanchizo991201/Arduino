/* FECHA:06/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: Verificación de la estructura Switch.
 */

int X = 1;   // Dato de entrada. 
int LED =13;  //El Led está conectado en el pin 13 de la placa.

void setup()
     {
     pinMode (LED, OUTPUT);  
     }

void loop()
{
     switch (X)  
        {
          case 1:
                 { digitalWrite (LED, HIGH); // Encendemos el LED.
                  delay (1000);
                  digitalWrite (LED, LOW); // Encendemos el LED.
                  delay (1000);    
                 }
          case 2:
                { digitalWrite (LED, HIGH); // Encendemos el LED.
                  delay (500); 
                  digitalWrite (LED, LOW); // Encendemos el LED.
                  delay (500);
                  digitalWrite (LED, HIGH); // Encendemos el LED.
                  delay (500); 
                  digitalWrite (LED, LOW); // Encendemos el LED.
                  delay (00);       
                } 
                  break;
          default:
                {
                  digitalWrite (LED, HIGH); // Encendemos el LED.
                  delay (100); 
                  digitalWrite (LED, LOW); // Encendemos el LED.
                  delay (100);
                  digitalWrite (LED, HIGH); // Encendemos el LED.
                  delay (100); 
                  digitalWrite (LED, LOW); // Encendemos el LED.
                  delay (100);    
                }                   
         }
}
