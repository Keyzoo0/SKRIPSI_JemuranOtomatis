#include <LiquidCrystal.h>

// lcd PC0 - PC6
LiquidCrystal lcd (16 , 17 , 18  , 19 , 20 , 21 , 22);

int motorA = 8, // PD0
    motorB = 9, //PD1
    EN = 15, //PD7
    pinLimitMaju = 14,//PD5
    pinLimitMundur = 13,//PD6
    pinSwitch = 28,//PA4
    pinBuka= 26,//PA2
    pinTutup= 27, //PA3
    pinLDR = 24;//PA0

 int adc ;
 int mode ; // mode 0 sensor mode 1 manual
 int buka;
 bool tutup;
 int Switch;
 int limitMaju;
 int limitMundur;