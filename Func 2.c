#include <stdio.h>


float Circle();
float Square();
float Rectangle();
float Triangle();
float House();
int main(){
    char shape;
    int isend =0;
    
    while (isend ==0)
    {
    printf("\nEnter Shape: ");
    scanf(" %c",&shape);
    switch (shape)
    {
    case 'S':
    case 's':
        printf("\nArea of the square = %.2f",Square());
        break;
    case 'R':
    case 'r':
        printf("\nArea of the rectangle = %.2f",Rectangle());
        break;
    case 'C':
    case 'c':
        printf("\nArea of the circle = %.2f",Circle());
        break;
    case 'T':
    case 't':
        printf("\nArea of the triangle = %.2f",Triangle());
        break;
    case 'H':
    case 'h':
        printf("\nArea of the House = %.2f",House());
        break;
    case 'X':
    case 'x':
        printf("\nending program....");
        isend =1;
        break;
    default:
        printf("\nWrongh input. Try again!");
        break;
    }
    }

        
        
    }
float Circle(){
    float Radius =0;
    float area=0;
    printf("\nEnter Radius of the circle: ");
    scanf("%f",&Radius);
    area = Radius*Radius*3.1415;
        return area;
        }
float Square(){
    float area =0;
    float side =0;
    printf("\nEnter the side of square: ");
    scanf("%f",&side);
    area = side*side;
    return area;
}
float Triangle(){
    float height=0,floor =0,area=0;
    printf("\nEnter height of triangle: ");
    scanf("%f",&height);
    printf("\nEnter floor of the triangle: ");
    scanf("%f",&floor);
    area = height*floor/2;
    return area;
}
float Rectangle(){
    float width1=0,widht2 =0,area=0;
    printf("\nEnter first width of rectangle: ");
    scanf("%f",&width1);
    printf("\nEnter second width of the rectangle: ");
    scanf("%f",&widht2);
    area = widht2*width1;
    return area;
}
float House(){
    float area =0,tri = 0, rec =0;
    tri = Triangle();
    rec= Rectangle();
    area = tri+rec;
    return area;
}