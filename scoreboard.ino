#include <LedControl.h>

LedControl lc = LedControl(11, 13, 10, 1);

int scoreA = 0;
int scoreB = 0;

int buttonA = 2;
int buttonB = 3;
int resetBtn = 4;

int buzzer = 6;

int timeLeft = 30; // süre
unsigned long prevTime = 0;

bool gameOver = false;

void setup() {

  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);

  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(resetBtn, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);
}

void loop() {

  // RESET HER ZAMAN ÇALIŞIR
  if(digitalRead(resetBtn) == LOW){
    scoreA = 0;
    scoreB = 0;
    timeLeft = 30;
    gameOver = false;
    lc.clearDisplay(0);
    delay(300);
  }

  // OYUN DEVAM EDİYORSA
  if(!gameOver){

    if(digitalRead(buttonA) == LOW){
      scoreA++;
      if(scoreA > 99) scoreA = 99;
      delay(200);
    }

    if(digitalRead(buttonB) == LOW){
      scoreB++;
      if(scoreB > 99) scoreB = 99;
      delay(200);
    }

    // TIMER
    if(millis() - prevTime >= 1000){
      prevTime = millis();
      timeLeft--;
    }

    displayScores();
  }

  // OYUN BİTTİYSE
  if(timeLeft <= 0 && !gameOver){
    gameOver = true;
    tone(buzzer, 1000); // ses
    delay(1000);
    noTone(buzzer);
  }

  if(gameOver){
    blinkWinner();
  }
}

void displayScores() {

  lc.setDigit(0, 3, scoreA / 10, false);
  lc.setDigit(0, 2, scoreA % 10, false);

  lc.setDigit(0, 1, scoreB / 10, false);
  lc.setDigit(0, 0, scoreB % 10, false);
}

// KAZANAN YANIP SÖNER
void blinkWinner(){

  for(int i=0; i<5; i++){

    lc.clearDisplay(0);
    delay(300);

    if(scoreA > scoreB){
      lc.setDigit(0, 3, scoreA / 10, false);
      lc.setDigit(0, 2, scoreA % 10, false);
    }
    else if(scoreB > scoreA){
      lc.setDigit(0, 1, scoreB / 10, false);
      lc.setDigit(0, 0, scoreB % 10, false);
    }
    else{
      displayScores(); // beraberlik
    }

    delay(300);
  }
}
