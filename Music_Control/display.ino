void display_draw(){
  display_clr();
  myOLED.print(small_menu[menu], 0, 1);
  myOLED.print(menu_name[menu], 0, 4);
  myOLED.print(small_menu[menu+2], 0, 7);
}
void display_clr(){
  myOLED.clrScr();
}

void display_vol(int Set){
  display_clr();
  PT2322_c();
  PT2323_c();
  myOLED.print(menu_name[Set], OLED_C, 1);
  myOLED.print(set_vol[Set], OLED_C, 4);
  myOLED.print(F("dB"), OLED_R, 4);
}

void display_2(int Set){
  display_clr();
  PT2322_c();
  PT2323_c();
  myOLED.print(menu_name[Set], OLED_C, 1);
  myOLED.print(set_vol[Set], OLED_C, 4);
  myOLED.print(F("dB"), OLED_R, 4);
}

/*void display_att_menu(){
  display_clr();
  myOLED.print(att_menu_ch[att_menu-1], 0, 1);
  myOLED.print(att_menu_ch[att_menu], 0, 4);
  myOLED.print(att_menu_ch[att_menu+1], 0, 7);
}

void display_att_vol(){
  display_clr();
  PT2322_c();
  myOLED.print(att_menu_ch[att_menu], OLED_C, 1);
  myOLED.print(att_vol[att_menu-1], OLED_C, 4);
  myOLED.print(F("dB"), OLED_R, 4);
}*/
