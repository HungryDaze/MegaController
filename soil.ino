unsigned int measurment(){
   
 if(moment>soilT.limit){
   
   static uint8_t meas = 0;
   array[meas] = soil.state();
   soilT.refresh(moment);
   
   for(int i=0;i<3;i++) sum += array[i];
   aver = sum/3;
   meas++;
   if(meas >= 3) meas = 0;  
 }
   return aver;
}   

 inline void openVal(){
 
  valve.state(HIGH);
  butVal = true;
  soilT.refresh(moment);

  }   

void closeVal(){
  
 if(butVal){
  static unsigned int sw = 250; 
  
  if(moment>turnT.limit) valve.state(sw);
  
  sw -= 25;
    
  if(sw <= 0){
    butVal = false;
    sw = 250;
  }   
 } 
}
  
  
