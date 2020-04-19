#include <stdio.h>
#define fee_rate 	0.06f // mine is that less cause i use refferal ( kickback %20 )  and bnb %25
#define fee_calc(tradevol)  ((tradevol/100) * fee_rate)  // function like macro (basicly replaces fee_calc with our statement, faster then functions)

int main(){
float trade_vol;
printf("enter your trade volume (usd) :  ");  
scanf("%f",&trade_vol);
printf("%.2f is  commision",fee_calc(trade_vol)); // didnt assigned it to a value because of memory


/*
sorry for this short code but idk :/
*/

}