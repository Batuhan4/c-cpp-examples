// Created on iPad.

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   int x=0;
   float fx=0;
   printf("enter an integer\n");
   scanf("%d",&x);
   if(x<0){
      fx= -x;
   }
   else if(x>=0 && x<=100){
      fx= x*x;
   }
   else{
      fx= x*x-50;
   }

   printf("f(x) = %f",fx);
   return 0;
}