// Created on iPad.

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   int numberLightWeight=0,numberMiddleWeight =0, numberHeavyWeight=0,avgWeight=0,numberOfAthletes=0,userData=1,sumWeight=0;// user data is 1 because 0 will close while loop if i don't use do while instead 
   while(userData != 0){
      printf("\nEnter weight of the athlete: ");
      scanf("%d",&userData);
      if(userData==0){
         printf("\n closing...");
         printf("\n--------------------------------");
      }
      else if (userData<0){
         printf("\n Incorrect input, enter the weight again!");
      }
      else if (userData<50) {
         numberOfAthletes++;
         numberLightWeight++;
         sumWeight=sumWeight+userData;
      }
      else if (userData<=70){
         numberOfAthletes++;
         numberMiddleWeight++;
         sumWeight=sumWeight+userData;
      }
      else {
         numberOfAthletes++;
         numberHeavyWeight++;
         sumWeight=sumWeight+userData;
      }
   }
   avgWeight = sumWeight/numberOfAthletes;
   printf("\n Number of athletes: %d",numberOfAthletes);
   printf("\n Average Weight: %d",avgWeight);
   printf("\n Number of Lightweight athletes: %d",numberLightWeight);
   printf("\n Number of Middleweight athletes: %d",numberMiddleWeight);
   printf("\n Number of Heavyweight athletes: %d",numberHeavyWeight);
   return 0;
}