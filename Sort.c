// Created on Maybel.

#include <stdio.h>

int main() {
   void sort(num1,num2){
     float backup= 0;
     if (num1<num2){
      backup = num1;
      num1= num2;
      num2 = backup;
     }
   }
   setbuf(stdout, NULL);
   float a=0, b=0, c =0;
   printf("enter num1: ");
   scanf("%f",a);
   printf("\n enter num2: ");
   scanf("%f",b);
   printf("\n enter num3: ");
   scanf("%f",c); 
   
   if (a<b){
      backup = a;
      a=b;
      b= backup;
   }
   printf("%f\n",a);
   printf("%f\n",b);
   printf("%f\n",c);
   return 0;
}