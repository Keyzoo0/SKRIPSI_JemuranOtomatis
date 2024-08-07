#include "variabel.h"

void setup() {
  setupLCD();
  setupMotor();
  setupButton();
  setupLDR();
}

void loop() {
  loopButton();
  kontrol_tirai() ;
   readADC();
}
