// Created on iPad.

#include <stdio.h>

int main() {
   setbuf(stdout, NULL);
   int l1=0,l2=0,l3=0,l4=0;
   int area1=0,area2=0;
   printf("enter side lenghts of first rectangle\n");
   scanf("%d %d",&l1,&l2);
   printf("enter side lenghts of second rectangle\n");
   scanf("%d %d",&l3,&l4);
   if(l1<0||l2<0||l3<0||l4<0){ 
      return -1;
   }
   else{
   area1=l1*l2;
   area2=l3*l4;
   }

   if(area1>area2)
   {printf("first one is bigger");}
   else if(area1==area2){
      printf("both equal");
   }
   else{
      printf("second one is bigger");
   }

   return 0;
}