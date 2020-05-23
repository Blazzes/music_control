void setup() {
  myOLED.begin();
  myOLED.setFont(MediumFontRus);
  enc.setType(TYPE2);
  enc.setTickMode(AUTO);
  Wire.begin();
  display_draw();
  UNLoad();
  delay(1000);
  PT2322_c();
  PT2323_c();
//  myTime = millis();
}

void loop() {
  if(millis() - myTime > 10000){
    display_clr();
    Load();
    while(1) if(enc.isPress() || enc.isTurn()) break;
    display_draw();
    myTime = millis();
    }
//boolean dis_clr = true;
  if(enc.isTurn()){
    myTime = millis();
    turn_menu();
    display_draw();
  }
  if(enc.isPress()){
    myTime = millis();
    Setting(menu);
  }
}
