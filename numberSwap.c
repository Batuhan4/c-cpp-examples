// Created on iPad.

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   int num=0,n1=0,n2=0,n3=0,temp=0;
   printf("\nenter a 3 digit number: ");
   scanf("%d",&num);
   //327! 226
   n1=num/100;
   n2=num/10 - n1*10;
   n3 = num - n1*100 -n2*10;
   if(n1<n2){
     temp = n1;
     n1 = n2;
     n2 = temp;
   }
   if(n1<n3){
      temp =n1;
      n1=n3;
      n3=temp;
   }
   if(n2<n3){
      temp = n2;
      n2 = n3;
      n3 = temp;
   }
   printf("\n %d%d%d",n1,n2,n3);
   return 0;
}