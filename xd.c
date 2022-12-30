/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int columnSwap(int array[][10],int int1){
    int temp=0;
    for(int i=0; i<int1;i++){
     temp = array[i][0];
     array[i][0]=array[i][int1 -1];
     array[i][int1 -1] = temp;
    }
    
    
        for(int i=0; i<int1;i++){
           for(int j=0; j<int1;j++){
                 printf("%d ",array[i][j]); 
              }
        printf("\n");
    }
}
int rowSwap(int array[][10],int int1){
    int temp=0;
    for(int i=0; i<int1;i++){
     temp = array[0][i];
     array[0][i]=array[int1-1][i];
     array[int1-1][i] = temp;
    }
    
        
        for(int i=0; i<int1;i++){
           for(int j=0; j<int1;j++){
                 printf("%d ",array[i][j]); 
              }
        printf("\n");
    }
    printf("\nThe column-exchanged matrix is:\n");
    columnSwap(array,int1);
}

int main()
{
    int matrix[10][10];
    int int1=0;
    printf("\nEnter an integer less than 10: ");
    scanf("%d",&int1);
    printf("\nEnter the elements of a %dx%d matrix: ",int1,int1);
    for(int i=0; i<int1;i++){
           for(int j=0; j<int1;j++){
                 scanf("%d",&matrix[i][j]); 
              }
 
    }
    printf("\nYour matrix is: \n");
        for(int i=0; i<int1;i++){
           for(int j=0; j<int1;j++){
                 printf("%d ",matrix[i][j]); 
              }
        printf("\n");
    }
    printf("\nThe row-exchanged matrix is:\n");
    rowSwap(matrix,int1);
    

    return 0;
}
