inline void lcdPrint(){
     
  int chk = DHT.read11(DHT11_PIN);
  
                /* ****************** 2nd Row *************** */
  lcd.setCursor(3,1);  lcd.print("   ");
  lcd.setCursor(3,1);  
      if(butIn) lcd.print((uint16_t)(inT.limit-moment)/1000);
      else lcd.print("OFF");
  lcd.setCursor(7,1);  lcd.print("  ");
  lcd.setCursor(7,1);  lcd.print(map(lightIn.state(),0,1024,0,100));
  lcd.setCursor(11,1); lcd.print("   ");
  /*lcd.setCursor(11,1); lcd.print(map(soil.state(),0,1024,0,100));*/ // print soil
  lcd.setCursor(16,1); lcd.print(DHT.temperature,1);
  
                /* ****************** 3rd Row *************** */
  lcd.setCursor(3,2);  lcd.print("   ");
  lcd.setCursor(3,2);  
    if(butFr) lcd.print((uint16_t)(frT.limit-moment)/1000);
    else lcd.print("OFF");
  lcd.setCursor(7,2);  lcd.print("  ");
  lcd.setCursor(7,2);  lcd.print(map(lightFr.state(),0,1024,0,100));
  
                /* ****************** 4th Row *************** */
  lcd.setCursor(3,3);  lcd.print("   ");
  lcd.setCursor(3,3); 
     if(butBa) lcd.print((uint16_t)(baT.limit-moment)/1000);
     else lcd.print("OFF");
  
  lcd.setCursor(7,3); lcd.print("   ");
  lcd.setCursor(7,3); 
    if(motionBa.state()) lcd.print("B");
    else lcd.print(countBa);
    if (motionIn.state()) lcd.print("I");
    else lcd.print("-");
    if (motionFr.state()) lcd.print("F");
    else lcd.print("-");
     
  lcd.setCursor(12,3); lcd.print("   ");
  lcd.setCursor(12,3); 
    if(butVal) lcd.print(" ON");
    else lcd.print("OFF");
  lcd.setCursor(16,3); lcd.print("    ");
  lcd.setCursor(16,3); lcd.print(DHT.humidity, 1);
  
  if(lock) {
    lcd.setCursor(3,2); lcd.print("*");
  }
  else{
    lcd.setCursor(2,3); lcd.print(" ");
  }

}

