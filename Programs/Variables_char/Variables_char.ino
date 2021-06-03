/* FECHA:03/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: creación de variables int, con las opreaciones matematicas basicas +,-,*,/ 
 * verificación con un led en el Arduno, haciendo el seguimiento de la varible X el resultado es 2 por
 * lo cual se ejecuta la primera parte del if de lo contrario se ejecuta el else. 
*/

 // Definición de variables
 
char LETRA = 'A';
int LED = 13;  // El LED esta conectado en el pin 13 de la placa.

void setup()
//Configuración de los puertos entrada o salida in out
{
      pinMode (LED, OUTPUT);
}

void loop()
// Cuerpo del programa ciclo de repetición 
 {
    // put your main code here, to run repeatedly:
    
    LETRA  = LETRA+1;
       
    if (LETRA == 'B') // Tambien puede ser el asccii de la letra en decimal 66 enciende el LED un minuto
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
