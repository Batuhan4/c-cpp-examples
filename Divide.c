/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num=0,divide=10,remain=0;
    printf("Enter a positive integer:  ");
    scanf("%d",&num);
    printf("\n");
    if(num<0){
        return -1;
    }
    else {
        while(num/divide != 0){
            remain = num%10;
            num = num/10;
            printf("%d",remain);
            
        }
        printf("%d",num);
    }


    return 0;
}

