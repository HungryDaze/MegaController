void security(){ 
  
  if(countBa = 0) securityT.refresh(moment);
  
  //else if (moment>securityT.limit) countBa = 0;
  
  if (countBa > 5){
   
    lock = true;
    lockT.refresh(moment);
    lampBa.state(LOW);
    
  }
  
  else if(moment>lockT.limit){
    
      lock = false;
      
  }
   
}    
 
  
    
    
  
