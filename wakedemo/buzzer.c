#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

void buzzer_init()
{
    timerAUpmode();
    P2SEL2 &= ~(BIT6 | BIT7);
    P2SEL &= ~BIT7; 
    P2SEL |= BIT6;
    P2DIR = BIT6;		
}

void buzzer_set_period(short cycles) 
{
  CCR0 = cycles; 
  CCR1 = cycles >> 1;		
}

void buzzerOff() {
  buzzer_set_period(0);
}

static int xmas_song = 0;
void songOne() {                  
   xmas_song ++;
   
   if (xmas_song == 125) // d eighth
     buzzer_set_period(numerator/D_5); 
   if (xmas_song == 250) // off
     buzzer_set_period(0); 
   if (xmas_song == 260) // g eighth
     buzzer_set_period(numerator/G_5);   
   if (xmas_song == 385) // off
     buzzer_set_period(0); 
   if (xmas_song == 395) // g quarter
     buzzer_set_period(numerator/G_5); 
   if (xmas_song == 645) // off
     buzzer_set_period(0); 
   if (xmas_song == 655)
     buzzer_set_period(numerator/G_5); // g quarter tied
   if (xmas_song == 905)
     buzzer_set_period(0); // off
   if (xmas_song == 915) // g quarter tied
     buzzer_set_period(numerator/G_5); 
   if (xmas_song == 1165) // f eighth
     buzzer_set_period(numerator/F_sharp_5); 
   if (xmas_song == 1290) // off
     buzzer_set_period(0); 
   if (xmas_song == 1300) // f quarter
     buzzer_set_period(numerator/F_sharp_5); 
   if (xmas_song == 1550) // off
     buzzer_set_period(0); 
   if (xmas_song == 1560) // e eighth
     buzzer_set_period(numerator/E_5); 
   if (xmas_song == 1685) // off
     buzzer_set_period(0);
   if (xmas_song == 1695) // d eighth
     buzzer_set_period(numerator/D_5);
   if (xmas_song == 1820) // e eighth 
     buzzer_set_period(numerator/E_5);
   if (xmas_song == 1945) // d quarter
     buzzer_set_period(numerator/D_5);
   if (xmas_song == 2195) // off
     buzzer_set_period(0);
   if (xmas_song == 2205) // d eigth 
     buzzer_set_period(numerator/D_5);
   if (xmas_song == 2330) // off
     buzzer_set_period(0);
   if (xmas_song == 2340) // c quarter
     buzzer_set_period(numerator/C_5);
   if (xmas_song == 2590) // b for 3
     buzzer_set_period(numerator/B_4);
   if (xmas_song == 2840) // a quarter
     buzzer_set_period(numerator/A_4);
   if (xmas_song == 3090) // g for 3
     buzzer_set_period(numerator/G_4);
   if (xmas_song == 3340) // off
     buzzer_set_period(0);
   if (xmas_song == 3465) // c quarter
     buzzer_set_period(numerator/C_5);
   
}

static int song_two = 3700;
void songTwo(){
    song_two ++;
    
    if (song_two == 3715) // b eighth
     buzzer_set_period(numerator/B_4);
   if (song_two == 3840) // a eighth
     buzzer_set_period(numerator/A_4);
   if (song_two == 3965) // g quarter
     buzzer_set_period(numerator/G_4);
   if (song_two == 4215) // off eighth
     buzzer_set_period(0);
   if (song_two == 4340) // g eighth
     buzzer_set_period(numerator/G_5);
   if (song_two == 4465) // off eighth
     buzzer_set_period(0);
   if (song_two == 4590) // g eighth
     buzzer_set_period(numerator/G_5);
   if (song_two == 4715) // off
     buzzer_set_period(0);
   if (song_two == 4725) // g quarter
     buzzer_set_period(numerator/G_5);
   if (song_two == 4975) // off eighth
     buzzer_set_period(0);
   if (song_two == 5100) // g quarter
     buzzer_set_period(numerator/G_5);
   if (song_two == 5350) // f eighth
     buzzer_set_period(numerator/F_sharp_5);
   if (song_two == 5475) // off eighth
     buzzer_set_period(0);
   if (song_two == 5600) // e eighth
     buzzer_set_period(numerator/E_5);
   if (song_two == 5725) // off
     buzzer_set_period(0);
   if (song_two == 5735) // e quarter
     buzzer_set_period(numerator/E_5);
   if (song_two == 5985) // d quarter
     buzzer_set_period(numerator/D_5);
   if (song_two == 6235) // off
     buzzer_set_period(0);
   if (song_two == 6245) // d eighth
     buzzer_set_period(numerator/D_5);
   if (song_two == 6360) // c for 3
     buzzer_set_period(numerator/C_5);
   if (song_two == 6735) // off
     buzzer_set_period(0);
   if (song_two == 6745) // c eighth
     buzzer_set_period(numerator/C_5);
   if (song_two == 6870) // off
     buzzer_set_period(0);
   if (song_two == 6880) // c eighth
     buzzer_set_period(numerator/C_5);
   if (song_two == 7005) // d for 3
     buzzer_set_period(numerator/D_5);
   if (song_two == 7280) // off
     buzzer_set_period(0);
   if (song_two == 7290) // d for 3
     buzzer_set_period(numerator/D_5);
   if (song_two == 7665) // a eighth
     buzzer_set_period(numerator/A_4);
   if (song_two == 7790) // b quarter
     buzzer_set_period(numerator/B_4);
   if (song_two == 8040) // a eighth
     buzzer_set_period(numerator/A_4);
   if (song_two == 8165) // g eighth
     buzzer_set_period(numerator/G_4);
   if (song_two == 8290) // g half
     buzzer_set_period(numerator/G_5);
   if (song_two >= 8790) // off
     buzzer_set_period(0);
}


