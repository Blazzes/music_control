void PT2322_c(){
  pt1.setFront_lk_att(abs(0));// att front L
  pt1.setFront_rk_att(abs(0));// att front R
  pt1.setCenter_att(abs(0));  // att center
  pt1.setRear_lk_att(abs(0)); // att rear L
  pt1.setRear_rk_att(abs(0)); // att rear R
  pt1.setSub_att(abs(0));     // att sub
  pt1.setFunc(set_vol[6],set_vol[5],0); // mute,3d,тембр on/off
  pt1.setBass(set_vol[3]);            // BASS    -14...0...14 dB (int -7...0...7)
  pt1.setMiddle(set_vol[2]);          // MIDDLE  -14...0...14 dB (int -7...0...7)
  pt1.setTreble(set_vol[1]);          // TREBLE  -14...0...14 dB (int -7...0...7)
  pt1.setVol(set_vol[0]);
}

void PT2323_c(){ // INPUT'S;
  pt0.setInput(set_vol[4]); 
  pt0.setMute(0,0,0,0,0,0,set_vol[6]); 
  pt0.setFeature(1,1); 
}
