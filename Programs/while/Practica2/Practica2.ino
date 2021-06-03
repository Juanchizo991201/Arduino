
/* FECCHA: 08/04/2020
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: Practica N°2 - Encendiendo un LED, dos segundos mediante un pulsador.
 * Fijando la entrada  del pin 7 en Arduino a Pull Down un Bajo (0) para que se active al primir 
 * el Boton (pulsador) el cual envia un Alto (1). 
*/ 

 #define LED 12
 #define BUTTON 7
 
 void setup()
    {
     pinMode(LED, OUTPUT);
     pinMode(BUTTON, INPUT);
    }

void loop ()
   {
    if(digitalRead(BUTTON)== HIGH)
       {
        digitalWrite(LED, HIGH);
        delay(2000);
        digitalWrite(LED, LOW);
       }
   }
