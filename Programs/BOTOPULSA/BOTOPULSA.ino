/*FECHA: 13/04/2020
 * AUTOR: Elías Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: Apagado y encendido de un LED con un Pulsador 
 */
int pulsador =2; // Elpulsador estará sobre el pin 2.
int LED =3;      // El LED estará sobre el pin 3.
int estado =LOW; // Creamos variable estado y la colocamos en LOW bajo(0);

 void setup()
  {
   pinMode(pulsador, INPUT); // Pin 2 como entrada.
   pinMode(LED, OUTPUT);     // pin 3 como salida.
   digitalWrite(LED, LOW);   // Nos aseguramos que el LED esté apagado (0).
  }  
 
void loop() 
   {
     while(digitalRead (pulsador) == LOW); //Mientras que  pulsador no se pulse estara e Bajo no hace nada (ciclo de lectura).
     estado = digitalRead(LED); // Entra aquí una vez que se oprime el pulsador y cambia el estado el pin 2 a HIGH.
                                // Lee el pin 3 el cual está en bajo LOW (0)por que nos hemos asegurado de esto y la cargamos en estado.
     digitalWrite(LED, !estado); // Encendemos el LED escribiendo el valor contrario o negado del valor que tiene actual osea HIGH (1). 
     while(digitalRead (pulsador) == HIGH); // Para evitar Rebotes en el pulsador, mientras el pulsador este pulsado no se tenga
                                            // en cuenta como un nuevo  pulso sino hasta cuando cese de ser oprimido.
   }

 // Nota: HardWare - Fijamos el pin 2 como PULL DOWN (Nivel bajo - 0). 
