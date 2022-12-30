// Created on iPad.

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   int num=0,sum=0;
   
   do{
    printf("\nenter a number:  ");
    scanf("%d",&num);
    sum = sum+num;
   }while(num!=0);

   printf("\n%d is the sum",sum);
   return 0;
}