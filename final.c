// Created on iPad.

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   char studentName[100];
   float mt1=0,mt2=0,final=0,finalExam=0;
   printf("\nEnter the name of the student: ");
   scanf("%s",studentName);
   printf("\nEnter the 1st  midterm grade: ");
   scanf("%f",&mt1);
   printf("\nEnter the 2st  midterm grade: ");
   scanf("%f",&mt2);
   printf("\nEnter the final exam grade: ");
   scanf("%f",&finalExam);
   final = mt1/100*30 + mt2/100*30 + finalExam/100*40;
   printf("\nThe student’s final grade is: %f ",final);
   if(final>50){
   printf("\nThe student passed.");
   }
   else{
   printf("\nThe student failed.\n");
   }

   return 0;
}