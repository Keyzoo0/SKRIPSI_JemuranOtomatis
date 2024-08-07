void setupMotor(){
  pinMode(motorA , OUTPUT);
  pinMode(motorB , OUTPUT);
  pinMode(EN , OUTPUT);
  digitalWrite(EN,HIGH);

}
void motorMaju(){
  analogWrite(motorA , 255);
  analogWrite(motorB , 0);
}

void motorMundur(){
  analogWrite(motorA , 0);
  analogWrite(motorB , 255);
}


void stopMotor(){
  analogWrite(motorA , 0);
  analogWrite(motorB , 0);
}

void kontrol_tirai(){
  lcd.setCursor(0, 0);
  lcd.print("Mode = ");
   
  if(Switch){
  //otomatis
    lcd.print("Otomatis");
    displayADC(); 
    if(adc > 500){
      if(limitMaju)stopMotor();
      else motorMaju();
    }else{
      if(limitMundur)stopMotor();
      else motorMundur();
    }  
  }else{
    lcd.print("Manual  ");
    lcd.setCursor(0, 1);
    lcd.print("Posisi :");
  //manual 
    if(buka){
      lcd.setCursor(8, 1);
      lcd.print("Buka   ");

      if(limitMaju)stopMotor();
      else motorMaju();
    }
    else if(tutup){
      lcd.setCursor(8, 1);
      lcd.print("Tutup  ");

      if(limitMundur)stopMotor();
      else motorMundur();
    }else{
      lcd.setCursor(8, 1);
      lcd.print("Mati  ");

      stopMotor();
    }

  }
}