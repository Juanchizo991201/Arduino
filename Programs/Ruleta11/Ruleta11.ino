/* 02042020 Destello de un LED, este programa hará que se encienda el LED por un Segundo 
  y tarde un segundos en apagarse quedandoen un ciclo. 
 */
 
 // Creación de Variables 

int LED1 =13;  // El LED esta conectado en el pin 13
int LED2 =12;  // El LED esta conectado en el pin 12
int LED3 =11;  // El LED esta conectado en el pin 11
int LED4 =10;  // El LED esta conectado en el pin 10
int LED5 =9;  // El LED esta conectado en el pin 9
int LED6 =8;  // El LED esta conectado en el pin 8
int LED7 =7;  // El LED esta conectado en el pin 7
int LED8 =6;  // El LED esta conectado en el pin 6
 
void setup()

 // Defininos Los Pines del Arduino sin son entradas o si son salidas 
{
      pinMode (LED1, OUTPUT);
      pinMode (LED2, OUTPUT);
      pinMode (LED3, OUTPUT);
      pinMode (LED4, OUTPUT);
      pinMode (LED5, OUTPUT);
      pinMode (LED6, OUTPUT);
      pinMode (LED7, OUTPUT);
      pinMode (LED8, OUTPUT);
      
}

void loop()
// Cuero del programa gera un loop de ejecución  
 {
   digitalWrite (LED1, HIGH);  //Encendemos el LED1  
   delay(12);                  //Demoramos 16 milisegundos 
   digitalWrite (LED3, HIGH);   //Apagamos el LED1 
   delay(12);                   //Demoramos 8 milisegundos  
   digitalWrite (LED5, HIGH);  //Encendemos el LED3 
   delay(12);                   //Demoramos 8 milisegundos 
   digitalWrite (LED7, HIGH);   //Apagamos el LED3 
   delay(12);                  //Demoramos 16 milisegundos 
   
   digitalWrite (LED1, LOW);  //Encendemos el LED1  
   delay(6);                  //Demoramos 16 milisegundos 
   digitalWrite (LED3, LOW);   //Apagamos el LED1  
   delay(6);                  //Demoramos 16 milisegundos 
   digitalWrite (LED5, LOW);  //Encendemos el LED3  
   delay(6);                  //Demoramos 16 milisegundos 
   digitalWrite (LED7, LOW);   //Apagamos el LED3
   delay(6);                  //Demoramos 16 milisegundos 
   
   digitalWrite (LED2, HIGH);  //Encendemos el LED1  
   delay(12);                  //Demoramos 16 milisegundos 
   digitalWrite (LED4, HIGH);   //Apagamos el LED1 
   delay(12);                   //Demoramos 8 milisegundos  
   digitalWrite (LED6, HIGH);  //Encendemos el LED3 
   delay(12);                   //Demoramos 8 milisegundos 
   digitalWrite (LED8, HIGH);   //Apagamos el LED3 
   delay(12);                  //Demoramos 16 milisegundos 
   
   digitalWrite (LED2, LOW);  //Encendemos el LED1  
   delay(6);                  //Demoramos 16 milisegundos 
   digitalWrite (LED4, LOW);   //Apagamos el LED1  
   delay(6);                  //Demoramos 16 milisegundos 
   digitalWrite (LED6, LOW);  //Encendemos el LED3  
   delay(6);                  //Demoramos 16 milisegundos 
   digitalWrite (LED8, LOW);   //Apagamos el LED3
   delay(6);                  //Demoramos 16 milisegundos  
  
   //digitalWrite (LED5, HIGH);  //Encendemos el LED5  
   //delay(16);                  //Demoramos 16 milisegundos 
  // digitalWrite (LED5, LOW);   //Apagamos el LED5  
   //delay(8);                   //Demoramos 8 milisegundos 
  // digitalWrite (LED7, HIGH);  //Encendemos el LED7  
  // delay(16);                  //Demoramos 16 milisegundos 
   //digitalWrite (LED7, LOW);   //Apagamos el LED7  
   //delay(8);                   //Demoramos 8 milisegundos 

   //digitalWrite (LED2, HIGH);  //Encendemos el LED2  
   //delay(16);                  //Demoramos 16 milisegundos 
   //digitalWrite (LED2, LOW);   //Apagamos el LED2  
   //delay(8);                   //Demoramos 8 milisegundos 
   //digitalWrite (LED4, HIGH);  //Encendemos el LED4  
   //delay(16);                  //Demoramos 16 milisegundos 
   //digitalWrite (LED4, LOW);   //Apagamos el LED4  
   //delay(8);                   //Demoramos 8 milisegundos 
   //digitalWrite (LED6, HIGH);  //Encendemos el LED6  
   //delay(16);                  //Demoramos 16 milisegundos 
   //digitalWrite (LED6, LOW);   //Apagamos el LED6  
   //delay(8);                   //Demoramos 8 milisegundos 
   //digitalWrite (LED8, HIGH);  //Encendemos el LED8  
   //delay(16);                  //Demoramos 16 milisegundos 
   //digitalWrite (LED8, LOW);   //Apagamos el LED8  
   //delay(8);                   //Demoramos 8 milisegundos              
 }
    
