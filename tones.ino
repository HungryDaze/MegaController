#define A4 440
#define B4 494
#define C5 523
#define D5 587
#define E5 659
#define F5 698
#define G5 784
#define A5 880
#define B5 988
#define C6 1046
#define D6 1175
#define E6 1318
#define F6 1397
#define G6 1568
#define A6 1760

void startingTone(){
  
  tone(buzzer,C5,400);
  delay(400);
  tone(buzzer,D5,350);
  delay(350);
  tone(buzzer,E5,300);
  delay(300);
  tone(buzzer,F5,250);
  delay(250);
  tone(buzzer,G5,200);
  delay(200);
  tone(buzzer,A5,150);
  delay(150);
  tone(buzzer,B5,100);
  delay(100);
  tone(buzzer,C6,400);
  delay(400);
}


void onSound(){
  
 tone(buzzer,A6,400);
 //delay(400);
  
}

void offSound(){
  
 tone(buzzer,A4,400);
 //delay(400);
} 

