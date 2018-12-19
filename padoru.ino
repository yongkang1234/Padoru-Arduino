#include "pitches.h"

const int speakerPin = 8;

int allMelodies[][6] = {
  {NOTE_C4, NOTE_C4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_C4},
  {NOTE_C4, NOTE_C4, NOTE_A4, NOTE_G4, NOTE_D4, 0},
  {NOTE_D4, NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_E4},
  {NOTE_C5, NOTE_C5, NOTE_AS4, NOTE_G4, NOTE_E4, NOTE_A4}
};

int allBeats[][6] = {
  {4, 4, 4, 4, 4, 2}, 
  {4, 4, 4, 3, 2, 0}, 
  {4, 4, 4, 4, 4, 2}, 
  {4, 4, 4, 4, 4, 2}
};

void playTone(int melody, int beats){
  double d = 1000 / beats;
  tone(speakerPin,melody, d);
  delay(d * 1.3);
}

void setup() {
  for(int i = 0; i < 4; i++){
    if(i == 1){
      for(int j = 0; j < 5; j++){
        playTone(allMelodies[i][j], allBeats[i][j]);
        if(j == 4){
          delay(250);
        }
      }
    }
    else{
      for(int j = 0; j < 6; j++){
        playTone(allMelodies[i][j], allBeats[i][j]);
        if(j == 5){
          delay(250);
        }
      }
    }
  }
}

void loop() {
  
}


