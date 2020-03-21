
int led = D7; 

void setup() {
  pinMode(led, OUTPUT);
  Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);

}

void myHandler(const char *event, const char *data){
    
    if (strcmp(data,"wave")==0)
    {
        blink(3);
    }
    else if (strcmp(data,"pat")==0)
    {
        blink(6);
    }
    
}


void blink(int times)
{
    
    for (int i = 0; i < times; i++)
    {
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
    }
    
}


void loop() {












  
  
  
  

  // And repeat!
}

