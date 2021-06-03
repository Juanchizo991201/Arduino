/* FECHA:06/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: While.
*/
int X =0;

int LED =13; // Creamos la variable LED en el pin 13 de la ´placa.

void setup()
{
   pinMode(LED, OUTPUT); // Definimos el puerto 13 como salida.
}

   void loop()
{
         
     while (X<10);  
          {            
           digitalWrite (LED, HIGH); // Enciende el LED.
           delay (1000);             //Permanece encendido por un segundo.
           digitalWrite (LED, LOW);  // Apaga el LED.
           delay (1000);             //Permanece encendido por un segundo.
          }
            X = X++;            
} 
          

      
