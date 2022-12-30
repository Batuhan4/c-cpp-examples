// Created on iPad.

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   int max=0,a=0,b=0,c=0,num=0,biggetNumber=0,middle=0,min=0;
   printf("enter 3 digit number: ");
   scanf("%d",&num);
   a= num/100 ;
   b= num/10-a*10 ;
   c= num -a*100 -b*10 ;
   
   max=a;
   if(a<=b){
      max=b;
      if(b<=c){
         max=c;
         middle=b;
         min=a;
      }
      else{
         max=b;
         if(a>=c){
            middle =a;
            min=c;
         }
         else{
            middle=c;
            min=a;
         }
         
      }
   }
   else if(a<=c)
   {
      max =c;
      if(a>=b){
         middle =a;
         min=b;
      }
      else{
         middle=b;
         min=a;
      }
   }

   else{
      max  =a;
      if(b>=c)
      {
         middle =b;
         min =c;
      }
      else{
         middle =c;
         min =b;
      }
   }

   // printf(" %d ",max);
   biggetNumber= max*100 +middle*10+min;
   printf("\nBiggest number is : %d ",biggetNumber);
   return 0;
}