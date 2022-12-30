/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float avgExam=0,avgStudent=0,sumExam=0,sumStudent=0;
    float studentGrade[4][3];
    for(int i =0; i<4; i++){
        printf("\nEnter the exam grades of Student %d: ",i+1);
        for(int a =0; a<3; a++){

        scanf("%f",&studentGrade[i][a]);
    }
    }
    
        for(int i =0; i<3; i++){
         sumExam=0;
        
        for(int a =0; a<4; a++){
        sumExam = sumExam+ studentGrade[a][i];
        
    }
        avgExam = sumExam/4;
        printf("\nThe average of the %dst exam is %f.",i+1,avgExam);
    
    }

    for(int i =0; i<4; i++){
        sumStudent=0;
        
        for(int a =0; a<3; a++){
        sumStudent = sumStudent + studentGrade[i][a];
        
    }
        avgStudent = sumStudent/3;
        printf("\nThe average of the %dst student is %f.",i+1,avgStudent);
    
    }

    return 0;
}
