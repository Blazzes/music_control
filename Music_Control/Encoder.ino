void turn_menu(){
    if(enc.isRight()){
      menu++;
      if(menu > 7) menu = 7;
    }
    if(enc.isLeft()){
      menu--;
      if(menu < 0) menu = 0;
    }
}

void turn_volume(int Set){
  if(enc.isRight()){
    set_vol[Set] ++;
    if(Set == 0 && set_vol[Set] > 79) set_vol[Set] = 79;
    if(Set == 1 && set_vol[Set] > 7) set_vol[Set] = 7;
    if(Set == 2 && set_vol[Set] > 7) set_vol[Set] = 7;
    if(Set == 3 && set_vol[Set] > 7) set_vol[Set] = 7;
    if(Set == 4 && set_vol[Set] > 4) set_vol[Set] = 4;
  }
  if(enc.isLeft()){
    set_vol[Set] --;
    if(Set == 0 && set_vol[Set] < 0) set_vol[Set] = 0;
    if(Set == 1 && set_vol[Set] < -7) set_vol[Set] = -7;
    if(Set == 2 && set_vol[Set] < -7) set_vol[Set] = -7;
    if(Set == 3 && set_vol[Set] < -7) set_vol[Set] = -7;
    if(Set == 4 && set_vol[Set] < 0) set_vol[Set] = 0;
  }
}

void turn_2(int Set){
  if(enc.isRight()){
      if(Set == 5){
        set_vol[Set]++;
        if(set_vol[Set] > 1) set_vol[Set] = 0;
      }
      if(Set == 6){ 
        set_vol[Set]++;
        if(set_vol[Set] > 1) set_vol[Set] = 0;
      }
  }
  if(enc.isLeft()){
       if(Set == 5){
        set_vol[Set]--;
        if(set_vol[Set] < 0) set_vol[Set] = 1;
      }
      if(Set == 6){ 
        set_vol[Set]--;
        if(set_vol[Set] < 0) set_vol[Set] = 1;
      }
  }
}

/*void att_set_menu_turn(){
  if(enc.isRight()){
    att_menu++;
    if(att_menu > 6)att_menu = 6;
    }
  if(enc.isLeft()){
    att_menu--;
    if(att_menu < 1)att_menu = 1;
    }
}

void att_set_vol_turn(int Set){
    if(enc.isRight()){
    set_vol[Set]++;
    if(set_vol[Set] > 0) set_vol[Set] = 0;
  }
  if(enc.isLeft()){
    set_vol[Set]--;
    if(set_vol[Set] < -14) set_vol[Set] = -14;
  }
}*/
