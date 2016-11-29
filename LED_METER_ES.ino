/*****************/
/*  MEDIDOR LED  */
/*****************/

/*** Sergio Jimenez Salmeron ***/

//** Definiciones **//
int rojo = 13;      //definimos el valor del pin para el LED rojo
int azul2 = 12;     //definimos el valor de los pines para los LEDs azules
int azul1 = 11;   
int azul0 = 10; 
int verde3 = 9;     //definimos el valor de los pines para los LEDs verdes
int verde2 = 8;
int verde1 = 7;
int verde0 = 6;


//** Programa **//
void setup() {
  pinMode(verde3,OUTPUT);  //declaramos los pines verdes como salida    
  pinMode(verde2,OUTPUT);
  pinMode(verde1,OUTPUT);
  pinMode(verde0,OUTPUT);
  pinMode(azul2,OUTPUT);   //declaramos los pines azules como salida
  pinMode(azul1,OUTPUT);
  pinMode(azul0,OUTPUT);
  pinMode(rojo,OUTPUT);    //declaramos el pin rojo como salida  
}

void loop() {
 digitalWrite(verde0,HIGH);   //encendemos el LED verde 1
 delay(300);                  //esperamos 0.3 segundos
  
 digitalWrite(verde1,HIGH);   //encendemos el LED verde 2
 delay(300);                  //esperamos 0.3 segundos
 
 digitalWrite(verde2,HIGH);   //encendemos el LED verde 3
 delay(300);                  //esperamos 0.3 segundos
 
 digitalWrite(verde3,HIGH);   //encendemos el LED verde 4
 delay(300);                  //esperamos 0.3 segundos
 
 
 digitalWrite(azul0,HIGH);    //encendemos el LED azul 1
 delay(400);                  //esperamos 0.4 segundos
 
 digitalWrite(azul1,HIGH);    //encendemos el LED azul 2
 delay(400);                  //esperamos 0.4 segundos
 
 digitalWrite(azul2,HIGH);    //encendemos el LED azul 3
 delay(500);                  //esperamos 0.4 segundos
 
 
 digitalWrite(rojo,HIGH);     //encendemos el led rojo
 delay(2000);                 //esperamos 2 segundos
 digitalWrite(rojo,LOW);      //apagamos el led rojo
 delay(50);                   //esperamos medio segundo
 
 digitalWrite(azul2,LOW);     //apagamos los demas leds en cascada
 delay(50);
 digitalWrite(azul1,LOW);
 delay(50);
 digitalWrite(azul0,LOW);
 delay(50);
 digitalWrite(verde3,LOW);
 delay(50);
 digitalWrite(verde2,LOW);
 delay(50);
 digitalWrite(verde1,LOW);
 delay(50);
 digitalWrite(verde0,LOW);
 delay(1000);                  //esperamos 1 segundo para volver a realizar la secuencia
 
}

