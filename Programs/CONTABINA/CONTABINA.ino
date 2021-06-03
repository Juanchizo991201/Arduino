/* FECHA: 14/04/2020
 * AUTOR: Elias Montengro Ramos 
 * DESCRIPCIÓN DEL PROGRAMA: Programa cntador de pulsos 
 * cuando llega a 5 enciende un LED coando llega a 8 apaga
 * el LED abre el programa monitor.
 */
int conta =0;

void setup() 
   {
     Serial.begin(9600);
     pinMode(2, INPUT);
     pinMode(13, OUTPUT);
     pinMode(12, OUTPUT);
     pinMode(11, OUTPUT);
   }

void loop()
   {
     
    if (digitalRead(2) == HIGH)
       {
        delay(100);
        if (digitalRead(2) == LOW)
           {
            conta ++;
            Serial.println(conta);
            delay(100);
           }
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        }     
    if(conta == 1)
       {
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
       }
    if(conta == 2)
       {
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(11, LOW);
       }
     if(conta == 3)
       {
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, LOW);
       }
    if(conta == 4)
       {
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
       }
    if(conta == 5)
       {
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(11, HIGH);
       }
    if(conta == 6)
       {
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
       }
    if (conta == 7)
       {
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        conta = 0; // TENER EN CUENTA LA ASIGNACIÓN CON UN SOLO = 
       }         
  }
   // NOTA: Usamos == para leer el estado de la variable pero no para asignar valor.
