void Load(){
  EEPROM.update(0, set_vol[0]);
  EEPROM.update(2, set_vol[1]+7);
  EEPROM.update(4, set_vol[2]+7);
  EEPROM.update(6, set_vol[3]+7);
  EEPROM.update(8, set_vol[4]);
  EEPROM.update(10, set_vol[5]);
}

void UNLoad(){
  set_vol[0] = EEPROM.read(0);
  set_vol[1] = EEPROM.read(2)-7;
  set_vol[2] = EEPROM.read(4)-7;
  set_vol[3] = EEPROM.read(6)-7;
  set_vol[4] = EEPROM.read(8);
  set_vol[5] = EEPROM.read(10);
}
