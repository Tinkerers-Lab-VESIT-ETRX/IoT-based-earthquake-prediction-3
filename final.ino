

#define acclerometer1 A4
#define acclerometer2 A5
int inclination1, inclination2;
int i;
int  accelerometer;
int j;


int SensorPin = A0;

void setup() {
  delay(10000);
  Serial.begin(9600);

}

void loop() {
   for (i=0;i<4;i++)
   {
   int SensorValue = analogRead(SensorPin);
   Serial.println(SensorValue); 
   delay(1000);
   }
   
  
   for (j=0;j<4;j++)
   { inclination1 = analogRead(acclerometer1);
   inclination2 = analogRead(acclerometer2);
   accelerometer= inclination1-inclination2 ;
  Serial.println(accelerometer); 
  delay(1000);
  
   }
  
}

  
      
  


/*if(SensorValue>600 && (inclination1 > inclination2  && (inclination1-inclination2)>200)) 

{

Serial.println("EARTHQUAKE");
delay(500);


}
else if (SensorValue>600 && (inclination1 < inclination2  && (inclination2-inclination1)>200 ))

{

Serial.println("EARTHQUAKE");
delay(500);


}
else

//If the value is greater than or equal to 200 then turn LEDs off.
{

Serial.println("NO EARTHQUAKE");


delay(500);


}

}*/
