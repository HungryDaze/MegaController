inline void openFr(){
  
  if(lightFr.state()<dark){
    
    lampFr.state(HIGH);
    butFr = true;
    frT.refresh(moment); // to add library
    onSound();
    
  }
  
  else if (moment>=(frT.limit-15000)){
    
    frT.refresh(moment);
   // onSound();
  }
}
   
inline void closeFr(){
 
  if((butFr)&&(moment>frT.limit)){
    
    lampFr.state(LOW);
    butFr = false;
    offSound();
    
  }
}  
      
