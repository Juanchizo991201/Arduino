
/* FECCHA: 08/04/2020
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: Practica N°2 - Encendiendo un LED, dos segundos mediante un pulsador.
 * Fijando la entrada  del pin 7 en Arduino a Pull Down un Bajo (0) para que se active al primir 
 * el Boton (pulsador) el cual envia un Alto (1). 
*/ 

 #define LED 12  //Esta definición hace que cuando se mencione la palabra LED sea cambiada por 12
 #define BUTTON 7 //Esta definición hace que cuando se mencione la palabra BUTTON sea cambiada por 7
 
 void setup()
    {
     pinMode(LED, OUTPUT);  // Pin 12 como Salida
     pinMode(BUTTON, INPUT); // Pin 7 como Entrada.
    }

void loop ()
   {
    if(digitalRead(BUTTON)== HIGH) //Lee el valor del pin 7 del aerduino.
       {
        digitalWrite(LED, HIGH);  // Escribe el valor del Pin 12 del Arduino.
        delay(2000);
        digitalWrite(LED, LOW); // Escribe el valor del Pin 12 del Arduino.
       }
   }
   
/* Nota: Cuando se lee un pin de entrada se puede guardar en una variable booleana o entera  
 *  Ej: Valor_pin = digitalRead (7);
*/ 
