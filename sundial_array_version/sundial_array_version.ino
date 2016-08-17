

int brightness[] = {0,0,0,0,0,0};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("7am, 9am, 11am, 1pm, 3pm, 5,pm");
}

void loop() {
  // put your main code here, to run repeatedly:

for (int i=0; i<6; i++){
brightness[i]=analogRead(i);
}

 for (int i=0; i <6; i++){
      if ( brightness[i] < 270)
     {
      brightness[i] = 1;
     }
     else
     {
      brightness[i] = 0;
     }
 }
 
 
  for (int i=0; i <6 ; i++){   
      Serial.print(brightness[i]);
      Serial.print(", ");
 }
Serial.println(" ");
delay(1000);


}
