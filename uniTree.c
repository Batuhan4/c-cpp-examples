// Created on iPad.

#include <stdio.h>

int main() { 
   int code =0,tree=0;
   float med=0,eng=0,law=0,eco=0,edu=0,sum=0;
   setbuf(stdout, NULL);
   char a = '%';
while(code != -1){
   printf("\nEnter the faculty code: ");
   scanf("%d",&code);
   if(code == -1){
      break;
   }
   printf("\nEnter the tree donation amount: ");
   scanf("%d",&tree);

   switch(code){
      case 1:
      med = med+tree;
      break;
      case 2:
      eng = eng+tree;
      break;
      case 3:
      law = law+tree;
      break;
      case 4:
      eco = eco+tree;
      break;
      case 5:
      edu = edu+tree;
      break;
      default:
      printf("\nwrong code input,please try again...");
      break;
   }
}
   sum = med+edu+eco+law+eng;
   printf("\ntotal number o trees donated: %f",sum);
   sum= sum/100;
   printf("\nmedicine: %.2f",med/sum);
   printf("%c\n",a);
   printf("\nengineer: %.2f",eng/sum);
   printf("%c\n",a);
   printf("\nlaw: %.2f",law/sum);
   printf("%c\n",a);
   printf("\neconomy: %.2f",eco/sum);
   printf("%c\n",a);
   printf("\neducation: %.2f",edu/sum);
   printf("%c\n",a);
   return 0;
}