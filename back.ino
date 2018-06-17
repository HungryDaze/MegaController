inline void openBa(){
  
  if(((lightFr.state()<dark)||(butFr))&&!butBa){
    
    lampBa.state(HIGH);
    butBa = true;
    ++countBa;
    baT.refresh(moment); 
    //onSound();
    
  }
  
  else if (moment>=(baT.limit-15000)){
    
    baT.refresh(moment);
    //onSound();
  }
}
   
inline void closeBa(){
 
  if((butBa)&&(moment>baT.limit)){
    
    lampBa.state(LOW);
    butBa = false;
    //offSound();  
  
  }
}  
      
