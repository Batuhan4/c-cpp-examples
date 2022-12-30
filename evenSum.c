/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=0,y=0,num=0,evenSum=0,evenAvg=0,counter=0;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("\nEnter y: ");
    scanf("%d",&y);
    while(x>y){
    printf("\nx is greater than y. try again.");
    printf("\nEnter x: ");
    scanf("%d",&x);
    printf("\nEnter y: ");
    scanf("%d",&y);
    }
    if(x<0 || y<0){
        return -1;
    }
    else {
        if(x%2 ==0){
            num =x;
        }
        else{
            num = x+1;
        }
        while(num<=y){
            evenSum = evenSum+num;
            num = num+2;
            counter++;
        }
        evenAvg=evenSum/counter;
        printf("\nEven sum: %d",evenSum);
        printf("\nEven average: %d",evenAvg);
    }

    return 0;
}

