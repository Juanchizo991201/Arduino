
/*FECHA: 16/04/2020
 *AUTOR: Elías Montenegro3 Ramos
 *DESCRIPCIÓN DE PROGRAMA: Utilizando la salida analogica 3 simulada mediante PWM del Arduno  
 *conectamos un Zumbador de 5 vol. y escuchamos algunos pito a intervalos regulares de tiempo.
 */
#define PIEZO 3 // Define PIEZO como 3 Cada vez que el encuentre en el porgrama 
                // la palabra PIEZO el lo reemplazara por un 3.
int Del =1000;

void setup()
   {
    pinMode(PIEZO, OUTPUT);
   }

void loop() 
   {
    analogWrite(PIEZO, 255);
    delay(Del);
    analogWrite(PIEZO, 0);
    delay(Del);
   }
