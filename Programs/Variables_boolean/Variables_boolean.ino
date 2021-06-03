/* FECHA:03/04/2020 
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: Creación de variables tipo boolean, y su verificación las operaciones logicas 
 * se verificaran despuesd los buleanos tambien se pueden verificar con 0 y 1, segun el porgrama la respuesta 
 * es correcta y se ejecuta la primera parte del if
*/

 // Definición de variables
 
boolean CONSULTA = true;      // Valor Booleano
boolean RESPUESTA = false; // Valor Booleano puede ser 0

int LED = 13;  // El LED esta conectado en el pin 13 de la placa.

void setup()
//Configuración de los puertos entrada o salida in out
{
      pinMode (LED, OUTPUT);
}

void loop()
// Cuerpo del programa ciclo de repetición 
 {       
    CONSULTA = !CONSULTA;   //Negamos CONSULTA queda en false
    CONSULTA = CONSULTA  && RESPUESTA;   // falso AND falso = falso 
    CONSULTA = !CONSULTA; // Negamos CONSULTA queda en true
    
    if (CONSULTA == 1) // Tambien puede ser el valor true el LED enciende un minuto
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
