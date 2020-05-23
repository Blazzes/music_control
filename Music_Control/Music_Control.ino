#include <EEPROM.h>
#include <Wire.h>
#include <PT2323.h>
#include <PT2322.h>
#include <iarduino_OLED_txt.h>
#include <GyverEncoder.h>

Encoder enc(3, 2, 4);

iarduino_OLED_txt myOLED(0x3C);   
extern uint8_t MediumFontRus[];      

PT2323 pt0; 
PT2322 pt1;

unsigned long myTime;
int menu = 0/*, att_menu = 1*/;
//boolean a = false;

const char *menu_name[] = {
  "ГРОМКОСТЬ",
  "ВЫСОКИЕ",
  "СРЕДНИЕ",
  "НИЗКИЕ",
  "ВХОД",
  "3D",
  "MUTE",
  "ОГРАНИЧЕНИЕ",
};
  
const char *small_menu[] = {
  "-----------",
  "громкость",
  "высокие",
  "средние",
  "низкие",
  "вход",
  "3d",
  "mute",
  "ограничение",
  "-----------",
};

/*const char *att_menu_ch[] = {
  "-----------",
  "FrontR",
  "FrontL",
  "RearR",
  "RearL",
  "Center",
  "Subbuffer",
  "-----------",
};*/

int set_vol[] = { // 0- vol, 1- treble, 2 - middle, 3 - bass, 4 - input, 5 - 3d, 6 - mute
  0,0,0,0,0,0,0
};

/*int att_vol[] = { // 0- frontL, 1- frontR, 2- center, 3- rearL, 4- rearR, 5- subbuffer
  0,0,0,0,0,0
};*/
