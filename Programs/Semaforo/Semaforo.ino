
/*FECHA: 09/04/2020
 *AUTOR: Elias Montenegro Ramos
 *DESCRIPCIÓN DEL PROGRAMA: Semaforo de ORENSE 
 *CONTROL DE DOS SEMAFOROS CON CRUCE.
*/

 void setup()
     {
       for(int pin=2; pin<=7; pin++)
         {
          pinMode(pin, OUTPUT);
         }
      }
 void SEMAFORO_1()// (DEFINICIÓN DE LA FUNCIÓN SEMAFORO_1) 
   {
    digitalWrite (2, HIGH);
    delay(500);
    digitalWrite (2, LOW);
    delay(500);
    digitalWrite (2, HIGH);
    delay(500);
    digitalWrite (2, LOW);
    delay(500);
    digitalWrite (2, HIGH);
    delay(500);
    digitalWrite (2, LOW);    //TERMINA EL PARPADEO DEL VERDE
    
    digitalWrite (3, HIGH); // ENCIENDE EL AMARILLO POR 3 SEGUNDOS
    delay(3000);  
      
    digitalWrite (3, LOW); //SE ASEGURA EL APAGADO DEL AMARILLO
    digitalWrite (4, HIGH); // ENCIENDE EL ROJO
    digitalWrite (7, LOW); // BAJA EL LED ROJO DEL OTRO LADO
    SEMAFORO_2();
   }

 void SEMAFORO_2()//(DEFINICIÓN DE LA FUNCIÓN SEMAFORO_2) 
   {
    digitalWrite (5, HIGH);
     delay(10000);
    digitalWrite (5, HIGH);
    delay(500);
    digitalWrite (5, LOW);
    delay(500);
    digitalWrite (5, HIGH);
    delay(500);
    digitalWrite (5, LOW);
    delay(500);
    digitalWrite (5, HIGH);
    delay(500);
    digitalWrite (5, LOW); //TERMINA EL FLECHADO DEL VERDE
    
    digitalWrite (6, HIGH);// ENCIENDE EL LED AMARILLO ´POR 3 SEGUNDOS
    delay(3000);
    
    digitalWrite (6, LOW); //SE ASEGURA DE BAJAR EL LED AMARILLO
    digitalWrite (7, HIGH); // SUBE EL LED ROJO
    digitalWrite (4, LOW); // BAJA EL LED ROJO DEL OTRO LADO
    SEMAFORO_1();
   }
 void loop()
   {
    for(int pin =2; pin<=7; pin++)
        {
          digitalWrite(pin, LOW);
        }
    
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
    SEMAFORO_1();
   }


/* Funciones Codigo que se usa varias veces desde el mismo programa las funciones tienen 
 *  un tipo type este valor sera el que devuelva la función, si no devuelve ningun valor
 *  la función, la función se denomina void función sorda.  
 *  type nombrefunción (parametros) 
 *       {
 *         sentencias se ejecutan al llamar a esta función 
 *       }   
 */
 
  */ 
