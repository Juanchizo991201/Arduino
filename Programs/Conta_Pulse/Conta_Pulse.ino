/*FECHA: 13/04/2020
 * AUTOR: Elias Montenegro Ramos
 * DESCRIPCIÓN DEL PROGRAMA: Pulsador y LED con contador de pulsos con programa monitor.
 */
int pulsador =2;
int LED =3;
int estado =LOW;
int conta =0;

void setup()
{
     Serial.begin(9600); // activamos la comunicación serial
     pinMode (pulsador, INPUT);
     pinMode (LED, OUTPUT);
     digitalWrite(LED, LOW);
}

void loop()
    {
       while(digitalRead (pulsador) == LOW); //Mientras que  pulsador no se pulse estara e Bajo no hace nada (ciclo de lectura).
       conta ++;  // Incrementamos contador
       Serial.println(conta); // mandamos información al programa monitor
       estado = digitalRead(LED); // Entra aquí una vez que se oprime el pulsador y cambia el estado el pin 2 a HIGH.
                                // Lee el pin 3 el cual está en bajo LOW (0)por que nos hemos asegurado de esto y la cargamos en estado.
       digitalWrite(LED, !estado); // Encendemos el LED escribiendo el valor contrario o negado del valor que tiene actual osea HIGH (1). 
       while(digitalRead (pulsador) == HIGH); // Para evitar Rebotes en el pulsador, mientras el pulsador este pulsado no se tenga
                                            // en cuenta como un nuevo  pulso sino hasta cuando cese de ser oprimido.
    }
