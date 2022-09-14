int trig=12;
int echo=11;
long distance;
int duration;

void setup()
{
 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(12, LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration*(0.034/2);
  if(distance<100)
      {
         digitalWrite(7,HIGH);
      }
      else
      {
         digitalWrite(7,LOW);
      }
         if(distance<75)
            {
             digitalWrite(6,HIGH);
            }
          else
            {
             digitalWrite(6,LOW);
          }
                if(distance<60)
                        {
                     digitalWrite(2,HIGH);
                        }
                 else
                        {
                    digitalWrite(2,LOW);
                 }
                    if(distance<45)
                          {
                       digitalWrite(3,HIGH);
                           }
                    else
                          {
                         digitalWrite(3,LOW);
                    }
        
                          if(distance<30)
                                {
                                    digitalWrite(4,HIGH);
                                 }
                             else
                                 {
                                     digitalWrite(4,LOW);
                             }
            
                                       if(distance<15)
                                              {
                                              digitalWrite(5,HIGH);
         
                                                }
                                        else
                                               {
                                               digitalWrite(5,LOW);
                                            
                                               }
}

     
  
  
                  
     
  
  
     
      
 

     
     
 
   
    


      