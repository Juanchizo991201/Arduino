/* FECHA:06/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: Do While.
*/

 // Este programa no funciona bien no interrumpe el ciclo.

int LED =13; // Creamos la variable LED en el pin 13 de la ´placa.

void setup()
{
   Serial.begin(9600); //Habilitamos el puerto.
   pinMode(LED, OUTPUT); // Definimos el puerto 13 como salida.
}

   void loop()
{    
     int X =0; 
     digitalWrite (LED, 0); // Enciende el LED.
     delay (5000);          //Permanece encendido por un segundo.
     
     do 
       { 
        Serial.println(X); //Vemos como se incrementa la variable X en el monitor.                
         X++;
         digitalWrite (LED, HIGH); // Enciende el LED.
         delay (500);             //Permanece encendido por un segundo.
         digitalWrite (LED, LOW);  // Apaga el LED.
         delay (500);             //Permanece encendido por un segundo.     
       }
          while (X<5);        
}             
          
