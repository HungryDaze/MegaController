inline void LoadLcd(){
    
  lcd.begin (20,4);
  lcd.setBacklightPin(3, POSITIVE);
  lcd.setBacklight(HIGH);
  
  lcd.setCursor (0,1);
  lcd.print("LOADING......  BITCH");
  startingTone();
  delay(2000);
  
  lcd.clear();
  lcdMatrix();
  lcdPrint();
}

void lcdMatrix(){
  
  lcd.setCursor(0,0);  lcd.print("MOTION");
  lcd.setCursor(7,0);  lcd.print("LGT");
  lcd.setCursor(11,0); lcd.print("SOIL");
  lcd.setCursor(16,0); lcd.print("TEMP");
  lcd.setCursor(0,1);  lcd.print("IN");
  lcd.setCursor(9,1);  lcd.print("%");
  lcd.setCursor(14,1); lcd.print("%");
  lcd.setCursor(0,2);  lcd.print("FR");
  lcd.setCursor(9,2);  lcd.print("%");
  lcd.setCursor(11,2); lcd.print("VALV");
  lcd.setCursor(16,2); lcd.print("HUMI");  
  lcd.setCursor(0,3);  lcd.print("BA");
}  


