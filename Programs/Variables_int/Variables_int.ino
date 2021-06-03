/* FECHA:03/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: creación de variables int, con las opreaciones matematicas basicas +,-,*,/ 
 * verificación con un led en el Arduno, haciendo el seguimiento de la varible X el resultado es 2 por
 * lo cual se ejecuta la primera parte del if de lo contrario se ejecuta el else. 
*/

 // Definición de variables
 
int X = 5;
int LED = 13;  // El LED esta conectado en el pin 13 de la placa.

void setup()
//Configuración de los puertos entrada o salida in out
{
      pinMode (LED, OUTPUT);
}

void loop()
// Cuerpo del programa ciclo de repetición 
 {       
    X = X+1;
    X = X-2;
    X = X*2;
    X = X/3;
       
    if (X == 2) // Como la comparación es correcta el LED dura encendido un Minuto
    {
     digitalWrite (LED, HIGH); //Enciende el LED 
     delay (60000);       
    }
    else
    {
     digitalWrite (LED, HIGH); //Enciende el LED 
     delay (100);        
     digitalWrite (LED, LOW); //Apaga el LED 
     delay (100); 
    }
 }
