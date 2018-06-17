inline void openIn(){  
  
  lightOn();
  
  if(moment>prtT.limit){
    lcdOn();
    prtT.refresh(moment);
  }
} 

inline void closeIn(){
   
  lightOff();
  
  if(moment>prtT.limit){
    lcdOff();
    prtT.refresh(moment);
  }
}       

inline void lightOn(){
  
  if(lightIn.state()<dark){    
    lampIn.state(HIGH);
    butIn = true;
    inT.refresh(moment); 
    onSound();   
  }
  else if (moment>=(inT.limit-15000)){    
    inT.refresh(moment);
    //onSound();   
  }
}         // end of lightOn()

inline void lcdOn(){
  if(!butLcd){    
    lcd.setBacklight(HIGH);
    lcdMatrix();
    lcdPrint();
    lcdT.refresh(moment); 
    butLcd = true;   
    onSound();
  }
  
  else if((inT.limit-15000)>=moment) {    
    lcdPrint();
    lcdT.refresh(moment);    
  }
    
  else {      
    lcdPrint();  
  }
}          //end of lcdOn()

inline void lightOff(){

  if((moment>inT.limit)&&(butIn)){    
    lampIn.state(LOW);
    butIn = false;
    offSound();    
  }  
 } // end of lightOff()

inline void lcdOff(){
                                 
  if((moment>lcdT.limit)&&(butLcd)&&(moment>300000)){
    lcd.clear();
    lcd.setBacklight(LOW);
    butLcd = false;  
    offSound(); 
  }
   else lcdPrint();     
}  // end of lcdOff()



