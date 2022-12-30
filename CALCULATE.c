#include <stdio.h>

int main(){
    setbuf(stdout,NULL);
    float sideLength =0, area=0, pi = 3.14;
    char selection;
    printf("Choose a shape (S/s for square, C/c for circle): ");
    scanf(" %c",&selection);
    printf("\nenter side length: ");
    scanf("%f",&sideLength);
    switch(selection){
      case 'c':

      case 'C':
      area = sideLength*sideLength*pi;
      break;
     
      case 's':

      case  'S':
      area= sideLength*sideLength;
      break;

      default: 
      printf("\nWrong Input");
      return -1;
    }

    printf("\nThe area is: %f",area);
    return 0;
}