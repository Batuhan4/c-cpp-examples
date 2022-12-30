/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int check=0;
    float num=0, cons =0;


    do{
     printf("Enter a positive number:  ");
     scanf("%f",&num);
     if(num<0){
     printf("\nError! Enter a positive number.");
     printf("\nDo you want to continue entering numbers?: ");
     scanf("%d",&check);
          if(check !=0){
            printf("Program is terminated.");
            return -1;
         }
          else{
          printf("Enter a positive number:  ");
          scanf("%f",&num);
     }
     }
    if(num >=0|| num<=9){
        cons = num*num*num - num;
    }
    else{
        cons = num*num - 5*num +1;
    }
    printf("\nf(%f) = %f",num,cons);
    printf("\nDo you want to continue entering numbers?: ");
    scanf("%d",&check);
    }while(check ==0);
    
    
    

    return 0;
}

