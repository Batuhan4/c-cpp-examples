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
1        1
alıp satmadaki kar oranı 0.12% olsa bile zarar etmiyosun demek bu
1000 dolarda 60 cent
1 al 1 sat 1.20 dolar
1.20/1000 dolar = 0.12/100
*/

}