#include "notes.h"

#define PAUSE 0
#define QN 1000
#define DEN 750
#define EN 500
#define SN 250

int play1[] = {NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5, NOTE_A4, PAUSE, NOTE_C4, NOTE_E4, NOTE_A4, NOTE_B4, PAUSE, NOTE_E4};
int play1_time[] = {SN, SN, SN, SN, SN, SN, SN, SN, EN, SN, SN, SN, SN, EN, SN, SN};

int play2[] = {NOTE_GS4, NOTE_B4, NOTE_C5, PAUSE, NOTE_E4};
int play2_time[] = {SN, SN, EN, SN, SN};

int play3[] = {NOTE_C5, NOTE_B4, NOTE_A4};
int play3_time[] = {SN, SN, QN};
int play3B_time[] = {SN, SN, EN};

int play4[] =      {PAUSE,NOTE_B4,NOTE_C5,NOTE_D5};
int play4_time[] = {SN,   SN,SN,SN};

int play5[] = {NOTE_E5, NOTE_G4,NOTE_F5,NOTE_E5,NOTE_D5, NOTE_F4,NOTE_E5,NOTE_D5,NOTE_C5, NOTE_E4,NOTE_D5,NOTE_C5,NOTE_B4, PAUSE, NOTE_E4,NOTE_E5, PAUSE, NOTE_E5,NOTE_E6, PAUSE ,NOTE_DS5,NOTE_E5, PAUSE ,NOTE_DS5,NOTE_E5,NOTE_D5};
int play5_time[] = {DEN,SN,SN,SN, DEN,SN,SN,SN,DEN,SN,SN,SN,EN, 20,    SN,SN, 20,   SN,SN, 20,   SN, SN, 20   ,SN, SN,SN};


void setup() {
  play_piece(8, play1, play1_time, sizeof(play1)/sizeof(play1[0]));
  play_piece(8, play2, play2_time, sizeof(play2)/sizeof(play2[0]));
  play_piece(8, play1, play1_time, sizeof(play1)/sizeof(play1[0]));
  play_piece(8, play3, play3_time, sizeof(play3)/sizeof(play3[0]));  

  delay(250);

  play_piece(8, play1, play1_time, sizeof(play1)/sizeof(play1[0]));
  play_piece(8, play2, play2_time, sizeof(play2)/sizeof(play2[0]));
  play_piece(8, play1, play1_time, sizeof(play1)/sizeof(play1[0]));
  play_piece(8, play3, play3B_time, sizeof(play3)/sizeof(play3[0])); 

  play_piece(8, play4, play4_time, sizeof(play4)/sizeof(play4[0])); 
  
  play_piece(8, play5, play5_time, sizeof(play5)/sizeof(play5[0]));  
  play_piece(8, play1, play1_time, sizeof(play1)/sizeof(play1[0]));

  play_piece(8, play2, play2_time, sizeof(play2)/sizeof(play2[0]));

  play_piece(8, play1, play1_time, sizeof(play1)/sizeof(play1[0]));
  play_piece(8, play3, play3B_time, sizeof(play3)/sizeof(play3[0]));
  play_piece(8, play4, play4_time, sizeof(play4)/sizeof(play4[0]));

  play_piece(8, play5, play5_time, sizeof(play5)/sizeof(play5[0]));
  play_piece(8, play1, play1_time, sizeof(play1)/sizeof(play1[0]));
  play_piece(8, play2, play2_time, sizeof(play2)/sizeof(play2[0]));
  play_piece(8, play1, play1_time, sizeof(play1)/sizeof(play1[0]));
  play_piece(8, play3, play3B_time, sizeof(play3)/sizeof(play3[0]));
  
}

void play_piece(int pin, int *melody, int *duration, int length) {
  for (int i = 0; i < length; ++i) {
    tone(pin, melody[i], duration[i]);
    delay(duration[i]);   
  }  
}

void loop() {
}
