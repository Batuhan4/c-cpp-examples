#include <stdio.h>
#include <stdlib.h>
#define Profit_rate 0.5
#define Win_rate    0.65//        24/37*100 = 0.64864864864


/*
this program uses a algorithm that will make possible to win in roulette


ROULETTE POSSIBILITIES

This is a very common gambling fallacy that doesn’t seem to have a name. It causes people to believe that a greater edge in terms of odds of winning also creates a greater edge in your odds of profiting.

Your odds of winning on this particular spin (the top one) are slightly less than 23/ — 24/37, to be exact. The bet doesn’t pay out 37:24, though. It usually pays out 2:1, rendering profit impossible, but we’ll pretend that it’s 3:1. That already gives the house a small edge, but let’s follow through anyway.

That gives you a net gain of $5 per win, and a net loss of $10 per miss. On average, you’ll have 13 losses for every 24 wins. Let’s crunch the numbers and see where that gets us.

$5 x 24 wins = $120 earned
$10 x 13 losses = $130 lost.
Total net gain: –$10.
Thus, if you continue to make this play the whole game, the house still has an edge of approximately 3%. On an American wheel (one with both a 0 and 00), the edge is even higher.
*/

double Roulette(double usedcash,double cash){  
    int win;
    int Game_Count;
    win=(rand())%100;  // we will make 0-99 numbers because there are 101 numbers in 0-100
    printf("---  %d  ---",win);
    Game_Count += 1;


    if (win<65)  // not <= because 0-64 is 65 numbers
    {
        cash += (usedcash*0.5);
        
    }
    else
    {
        cash -= usedcash ;
    
    }
    
    return cash;


}




 
int main(){
    double cash,usedcash ;
    printf("enter your starting cash \n");
    scanf("%lf",&cash);
    printf(" how many cash u will use? (it will be double every game)");
    scanf("%lf",&usedcash);

    for (int i = 0; i<42; i++)
    {
        cash = Roulette(usedcash,cash);
        usedcash *=2;
    }
    printf("\n \n new cash: %f",cash-1000);
    
    




  //printf("%.2f %.2f",Profit_rate,Win_rate);

}

