void setupButton(){
    pinMode(pinLimitMaju,INPUT_PULLUP);
    pinMode(pinLimitMundur,INPUT_PULLUP);
    pinMode(pinSwitch,INPUT_PULLUP);
    pinMode(pinBuka,INPUT_PULLUP);
    pinMode(pinTutup,INPUT_PULLUP);
    

  }
void loopButton(){
  
 buka = !digitalRead(pinBuka); 
 tutup = !digitalRead(pinTutup); 
 Switch = !digitalRead(pinSwitch); 
 limitMaju = !digitalRead(pinLimitMaju); 
 limitMundur = !digitalRead(pinLimitMundur); 
}

