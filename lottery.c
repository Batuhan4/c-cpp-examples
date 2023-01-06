#include <stdio.h>
#include <time.h>

int main(){
    int userNum=0,winnerNum=0;
    printf("Enter a number 1-100");
    scanf("%d",&userNum);
    srand(time(NULL));
    winnerNum = rand()%100 +1;

    if (winnerNum==userNum)
    {
        printf("U WON Xd batuflex marka paralar dalga daha fazla gazla havai");
    }
    else{
        printf("u entered %d but winner num is %d sorry bro thank you for playing new year :)))))))) ",userNum,winnerNum);
    }
    
    return 0;
}