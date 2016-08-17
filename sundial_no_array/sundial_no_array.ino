/*  
  Arduino Ep 2 - Digital and Analog Pins
  Exploring Analog circuits. Analog pins read voltage from 0-5 volts.
  This is converted into a value from 0 to 1023. We are using a photresitor
  and a 100 ohm resitor. To learn more visit www.scijoy.community
 */
//Defining the values for the analog pins.
const int LDR0 = 0;
const int LDR1 = 1;
const int LDR2 = 2;
const int LDR3 = 3;
const int LDR4 = 4;
const int LDR5 = 5;

//This is the vaule each LDR outputs. It will range from 0-1023, becasue we are using a 10 bit converter.
int brightness0 = 0; 
int brightness1 = 0; 
int brightness2 = 0; 
int brightness3 = 0; 
int brightness4 = 0;
int brightness5 = 0;  

void setup() {
   //Opening the serial communications between the computer and the Arduino.
  Serial.begin(9600);
  
  //Creating a header here, because we only need it once.
  Serial.print("Sensor 0, Sensor 1, Sensor 2, Sensor 3, Sensor 4, Sensor 5"); 
  
}

void loop() {

//Reading values from each fo the LDR sensors
  brightness0 = analogRead(LDR0);
  brightness1 = analogRead(LDR1);
  brightness2 = analogRead(LDR2);
  brightness3 = analogRead(LDR3);
  brightness4 = analogRead(LDR4); 
  brightness5 = analogRead(LDR5);
  
 
  Serial.print(brightness0); Serial.print(", ");
  Serial.print(brightness1); Serial.print(", ");
  Serial.print(brightness2); Serial.print(", ");
  Serial.print(brightness3); Serial.print(", ");
  Serial.print(brightness4); Serial.print(", ");
  Serial.println(brightness5);
  
  delay(1000);

}
