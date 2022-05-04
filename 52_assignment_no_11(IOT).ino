// C++ code
int a=0;
float f=0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  Serial.println("1.Temperature in Degree celcius is:");
  Serial.println("2.Temperature in fahrenheit is:");
}

void loop()
{
   float op=analogRead(A0);
    float a=(((op*5)/1024)-0.5)/0.01;
    
    float f=(a*9/5)+32;
  
    
    if(a<70)
    {
      digitalWrite(8,HIGH);
    
      digitalWrite(2,LOW);
      
    }
     else 
     {
       digitalWrite(2,HIGH);
      
       digitalWrite(8,LOW);
     
       
     }

    int c;
     c=Serial.parseInt();
      
      switch (c)
          {
            case 1:
            Serial.println("1.temperature in celcius is");
            Serial.println(a);
            break;
            
            case 2:
            Serial.println("2.temperature in fahreenheit is");
            Serial.println(f);
             break;
          exit(1);
            
          }
       
 }   
            
            
            
           
       


