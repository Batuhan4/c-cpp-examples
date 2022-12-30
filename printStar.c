// Created on ipad by 

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   int number =0,number2=0;
   printf("enter a poitive number: ");
   scanf("%d",&number);
   if(number>0){
   while(number>0){
     number2=number;
     
     while(number2>0){
      printf("*");
      number2=number2-1;

     }
     number=number-1;
     printf("\n");
   }
   }
   else{
   printf("\nwrong input");
   return -1;
   }
   return 0;
}