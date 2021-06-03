// Encabezado.
   /* FECHA:03/04/2020 
    * AUTOR: Elías Montenegro Ramos
    * DESCRIPCIÓN DEL PROGRAMA: comunicación serial envio de caracter
   */
// Fin de encabezado.
 
//Definición de variables.

  int LED =13; // Creamos una variable de nombre LED pin 13 de la placa.
    
// Fin de definición de vaiables.

// Configuración de Puertos como entrada o salida. 

   void setup()
{
   pinMode(LED, OUTPUT); // Definimos el puerto 13 como salida.
}

// Fin d ela configuración de puertos como entrada o salida.

// inicio del cuerpo del porgrama
   void loop()
{
     digitalWrite (LED, HIGH); //Enciende el LED
     delay(1000); // Permanece encendido un segundo.
     digitalWrite (LED, LOW); //Apaga el LED por un segundo
     delay(1000); // Permanece encendido un segundo. 
}
//Fin del cuerpo del programa el cual se queda en un loop.
