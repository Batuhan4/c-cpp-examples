#include <stdio.h>

int main(){
    setbuf(stdout,NULL);
    float sideLength =0, area=0, pi = 3.14;
    char selection;
    printf("Choose a shape (S/s for square, C/c for circle): ");
    scanf(" %c",&selection);
    printf("enter side length: ");
    scanf("%f",&sideLength);
    switch(selection){
      case 'S':

      case 's':
      area = sideLength*sideLength*pi;
      break;
     
      case 'c':

      case  'C':
      area= sideLength*sideLength*
      break;
      default: 
      printf("Wrong Input");
      break;
    }

    printf("The area is: %f",area);
    return 0;
}