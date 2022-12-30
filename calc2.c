#include <stdio.h> 
int main(){

    float num1=0,num2=0,result =0;
    int isResume =0;
    setbuf(stdout,NULL); // i put this only when writing code on ipad , because stdout sometimes has cache or smth so it doesn't work
   
    char selection;

    do
    {
        printf("\nEnter 2 floating numbers: ");
        scanf("%f%f",&num1,&num2);
        printf("\nChoose operation (+, -, *, /): ");
        scanf( " %c",&selection);
    switch (selection)
    {  

        case '+':
        result = num1+num2;
        break;
        case '-':
        result = num1-num2;
        break;
        case '/':
        result = num1/num2;
        break;
        case '*':
        result = num1*num2;
        break;
        
    
    default:
        printf("\nwrong selection!");
        break;
    }
    printf("\n result: %f \n",result);
    printf("\nDo you want to continue?(1 for yes): ");
    scanf("%d", &isResume);
    } while (isResume == 1);
    

    return 0;
}