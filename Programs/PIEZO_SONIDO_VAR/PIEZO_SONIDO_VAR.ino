
/*FECHA: 16/04/2020
 *AUTOR: Elías Montenegro3 Ramos
 *DESCRIPCIÓN DE PROGRAMA: Utilizando la salida analogica 3 simulada mediante PWM del Arduno  
 *conectamos un Zumbador de 5 vol. y escuchamos algunos pito a intervalos regulares de tiempo
 *haciendolos variar en el rango de 0 a 255.
 */
#define PIEZO 3 // Define PIEZO como 3 Cada vez que el encuentre en el porgrama 
                // la palabra PIEZO el lo reemplazara por un 3.
int tiempo =100; // cargamos una variable para que al hacer un cambio se cambie 
                 // entodo el programa.
int sonido;

void setup()
   {
    Serial.begin(9600);
    pinMode(PIEZO, OUTPUT);
   }

void loop() 
   {
    for(sonido = 0; sonido <256; sonido++)
        {
          analogWrite(PIEZO, sonido);
          delay(tiempo);
          Serial.println(sonido);
        }
    for(sonido < 256; sonido >0; sonido--)
        {
          analogWrite(PIEZO, sonido);
          delay(tiempo);
          Serial.println(sonido);
        }   
   } 
   // Nota: sabemos que el maximo valor es 255 que equivale a 5 Vol que es lo que 
   // el Arduino a la salida. 
