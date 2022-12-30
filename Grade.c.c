// Created on Maybel.

#include <stdio.h>

int main() {
   float midterm =0, final= 0,av=0;
   setbuf(stdout, NULL);
   printf("enter midterm grade: ");
   scanf("%f",&midterm);
   printf("\n enter final grade: ");
   scanf("%f",&final);
   av = midterm*0.4 + final*0.6;
   if (av>60){
      printf("u passed\n");
   }
   else{
      printf("u are in trouble");
   }
   return 0;
}