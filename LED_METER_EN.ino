/*****************/
/*   LED METER   */
/*****************/

/*** Sergio Jimenez Salmeron ***/

//** Declarations **//
int red = 13;       //Set the pin value for the red LED
int blue2 = 12;     //Set the pin value for the blue LEDs
int blue1 = 11;   
int blue0 = 10; 
int green3 = 9;     //Set the pin value for the green LED
int green2 = 8;
int green1 = 7;
int green0 = 6;


//** Program **//
void setup() {
  pinMode(green3,OUTPUT);  //Set the green pin as output    
  pinMode(green2,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(green0,OUTPUT);
  pinMode(blue2,OUTPUT);   //Set the blue pin as output
  pinMode(blue1,OUTPUT);
  pinMode(blue0,OUTPUT);
  pinMode(red,OUTPUT);     //Set the red pin as output  
}

void loop() {
 digitalWrite(green0,HIGH);   //turn on the green LED 1
 delay(300);                  //wait for 0.3 seconds
  
 digitalWrite(green1,HIGH);   //turn on the green LED 2
 delay(300);                  //wait for 0.3 seconds
 
 digitalWrite(green2,HIGH);   //turn on the green LED 3
 delay(300);                  //wait for 0.3 seconds
 
 digitalWrite(green3,HIGH);   //turn on the green LED 4
 delay(300);                  //wait for 0.3 seconds
 
 
 digitalWrite(blue0,HIGH);    //turn on the blue LED 1
 delay(400);                  //wait for 0.4 seconds
 
 digitalWrite(blue1,HIGH);    //turn on the blue LED 2
 delay(400);                  //wait for 0.4 seconds
 
 digitalWrite(blue2,HIGH);    //eturn on the blue LED 3
 delay(500);                  //wait for 0.4 seconds
 
 
 digitalWrite(red,HIGH);      //turn on the red LED
 delay(2000);                 //wait for 2 seconds
 digitalWrite(red,LOW);       //turn off the red LED
 delay(50);                   //wait for 0.5 seconds
 
 digitalWrite(blue2,LOW);     //turn off the other LEDs
 delay(50);
 digitalWrite(blue1,LOW);
 delay(50);
 digitalWrite(blue0,LOW);
 delay(50);
 digitalWrite(green3,LOW);
 delay(50);
 digitalWrite(green2,LOW);
 delay(50);
 digitalWrite(green1,LOW);
 delay(50);
 digitalWrite(green0,LOW);
 delay(1000);                  //wait for 1 second to repeat the sequence.
 
}

