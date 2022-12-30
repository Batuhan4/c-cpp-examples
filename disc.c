#include <stdio.h>


int main(){
    setbuf(stdout,NULL);
    char selection;
    float discount=0, price=0, total=0;
    printf("What would you like to buy? ");
    scanf(" %c",&selection);
    printf("\nHow much is it? ");
    scanf("%f",&price);
    switch(selection){
        case 'l':
        case 'L':
        if(price>800){
            discount =5;
        }
        else{
            discount =0;
        }
        break;

        case 's':
        case 'S':
        if(price>400){
            discount =4;
        }
        else{
            discount =0;
        }
        break;

        case 'T':;
        case 't':
        if(price>1300){
            discount =7;
        }
        else{
            discount =0;
        }
        break;

        case 'h':
        case 'H':
        if(price>90){
            discount =3;
        }
        else{
            discount =0;
        }
        break;
        default: 
        printf("\nwrong input!!!");
        return -1;  
    }
    total = price - price*discount/100;
    printf("\nThe amount you need to pay is %f dollars.",total);

    return 0;
}