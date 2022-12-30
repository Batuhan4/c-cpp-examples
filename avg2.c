/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX_DIMENSION 10

int main()
{
    int numberOfColums =0, numberOfRows =0;
    printf("\nEnter number of rows: ");

    scanf("%d",&numberOfRows);
    printf("\nEnter number of columns: ");
    scanf("%d",&numberOfColums);
    if(numberOfColums != numberOfRows){
    printf("\nError. The input must be a square matrix. ");
    return -1;
    }
    int matrix[MAX_DIMENSION][MAX_DIMENSION];
    printf("\nFill the array:\n");
    for(int i= 0;i<numberOfRows;i++){
        for(int a= 0;a<numberOfColums;a++){\
        scanf("%d",&matrix[i][a]);
        
       }
    }
    sum(matrix,numberOfRows,numberOfColums);
    return 0;
}
void sum(int matrix1[][MAX_DIMENSION],int numberOfRows,int numberOfColums){
    int sum2=0;
     printf("\n The elements of the main diagonal are: ");
     for(int i= 0;i<numberOfRows;i++){
        for(int a= 0;a<numberOfColums;a++){
            if(i==a){
                printf("%d ",matrix1[i][a]);
                sum2 = sum2+ matrix1[i][a];
                
            }
        
        
       }
    }
    printf("\n Their sum = %d",sum2);
}

