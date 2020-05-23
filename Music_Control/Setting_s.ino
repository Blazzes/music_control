void Setting(int Set){
  boolean w = true;
  //if(Set == 7) att_set_menu();
  display_clr();
  display_vol(Set);
  if(Set < 5){
    while(w){
      if(enc.isPress()) w = false;
      if(enc.isTurn()){
        turn_volume(Set);
        display_vol(Set);
      }
    }
  }

  if(Set >= 5 && Set < 7){
    while(w){
      if(enc.isPress()) w = false;
      if(enc.isTurn()) {
        turn_2(Set);
        display_2(Set);
        }
      }
    }
  myTime = millis();
  display_clr();
  display_draw();
}
/*boolean quit = true;
void att_set_menu(){
  quit = true;
  display_clr();
  display_att_menu();
  while(quit){
    if(enc.isPress()) att_set_vol();
    if(enc.isDouble()) quit = false;
    if(enc.isTurn()){
        att_set_menu_turn();
        display_att_menu();
      }
    }  
  display_clr();
  display_draw();
}

void att_set_vol(){
  boolean tmp = true;
  display_clr();
  while(tmp){
    if(enc.isPress()) tmp = false;
    if(enc.isDouble()) quit = false;
    if(enc.isTurn()){
      att_set_vol_turn(att_menu-1);
      display_att_vol();
      }
    }
}*/
