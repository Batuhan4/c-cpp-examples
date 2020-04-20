#include <stdio.h>
#define fee 0.002f // if u are vip0 depending on: binance.com
//fee is calculated from btc but i dont think it will be change too much
// % 0.55 kar ettiğin her işlem mübah
float foo(float buy,float sell); // decleration
int main(){

    float buy_price,sell_price;
    printf("invested money :  ");
    scanf("%f",&buy_price); // we could have use double too not too much change
    printf("\nmoney after sell:  ");
    scanf("%f",&sell_price); // avarage profit because its relies on btc and fee
    printf("\n  this is your avarage profit: ** %.4f **",foo(buy_price,sell_price));
}  

float foo(float buy,float sell){
float result = 0;
result = (buy+sell)*fee;
return (sell-buy)-result;



}