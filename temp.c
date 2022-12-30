// Created on iPad.

#include <stdio.h>
int main() {
   float temp = 0;
   setbuf(stdout, NULL);
   printf("please enter the temperature\n");
   scanf("%f",&temp);
   if(temp<5){
   printf("\ncold");
   }
   else if(temp>5 && temp <20){
   printf("\nwarm");
   }
   else{
   printf("\nhot");
   }
return 0;
}