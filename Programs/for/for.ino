/* FECHA:06/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: Verificación de la estructura for.
 */
// definición de variables.

int LED =13;  //El Led está conectado en el pin 13 de la placa.

void setup()
     {
     pinMode (LED, OUTPUT);  
     }

void loop()
{
     for (int i = 0; i<10; i++)  
         { digitalWrite (LED, HIGH); // Encendemos el LED.
           delay (1000);
           digitalWrite (LED, LOW); // Encendemos el LED.
           delay (1000);                    
         }
      digitalWrite (LED, LOW); // Encendemos el LED.
      delay (30000);       
} 
      
