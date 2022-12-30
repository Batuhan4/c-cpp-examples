#include <stdio.h>

int main(){
    setbuf(stdout,NULL);
    int save=0, remainder=0;
    printf("enter a positive integer: ");
    scanf("%d", &save);
    if(save<0){
        printf("\nonly positive integers accepted.");
        return -1;
    }
    else  if(save%5==0){
        printf("\n %d is divisible by 5",save);
    }
    else{
        printf("\n %d is not divisible by 5",save);
        remainder =save%5;
        printf("\n the remainder is %d  ",remainder);
    }
    return 0;
}