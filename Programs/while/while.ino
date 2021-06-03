/* FECHA:06/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: While.
*/


int LED =13; // Creamos la variable LED en el pin 13 de la ´placa.

void setup()
{
   Serial.begin(9600); // habilitamos el puerto a 9600
   pinMode(LED, OUTPUT); // Definimos el puerto 13 como salida.
}

   void loop()
{
   digitalWrite (LED, 0); // Enciende el LED.
   delay (3000);
     int X =0;    
     while (X<5)
     {     
           Serial.println(X); // Vemosa l abrie el monitor como se incrementa X                   
           digitalWrite (LED, 1); // Enciende el LED.
           delay(500);
           digitalWrite (LED, 0); // Enciende el LED.
           delay(500);
           X++;  // Se incrementa X                
     }         
}          

  // Hay unos trucos importantes   para visualizar las variables.
  // Ojo con los incrementos.  
