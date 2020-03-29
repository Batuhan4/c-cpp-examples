
#include <stdio.h>

int main()
{
    // sayılara base dönüşümü yapar
    int onluk,kalan[100],i=0,base;

    printf("enter a base 10 number :  ");
    scanf("%d",&onluk);
    
    printf("\nwhich base to change number :  ");
    scanf("%d",&base);

    for (; onluk/base >0; i++)
    {
        kalan[i]= onluk%base;
        onluk /= base;
    }
    

    printf("%d",onluk);
    for (int c = (i-1); c >= 0 ; c--)
    {
        printf("%d",kalan[c]);
    }
    
    


    
    

    

}
