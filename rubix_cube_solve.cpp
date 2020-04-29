#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define square 6
#define row 3
#define coll 3
int r_count = 0, o_count = 0, w_count = 0, y_count = 0, b_count = 0, g_count = 0; // count numbers max is 9 for all

typedef enum COLOR
{
    r=1,
    o,
    w,
    y,
    b,
    g
} COLOR; // colors: red orange white yellow blue green to be static

COLOR rand_color()
{
    int random;

    while (1) // to check if there was more then 9
    {
        random = rand() % 7;
        switch (random)
        {
        case r:
            if (r_count == 9)
                continue;
            r_count++;

            return r;
        case o:
            if (o_count == 9)
                continue;
            o_count++;

            return o;
        case w:
            if (w_count == 9)
                continue;
            w_count++;

            return w;
        case y:
            if (y_count == 9)
                continue;
            y_count++;

            return y;
        case b:
            if (b_count == 9)
                continue;
            b_count++;

            return b;
        case g:
            if (g_count == 9)
                continue;
            g_count++;

            return g;

        default:

            continue;
        }
    }
}

void init(COLOR cube[][3][3], int s, int r, int c)
{

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < r; j++)
        {
            for (int p = 0; p < c; p++)
            {
                cube[i][j][p] = rand_color();
            }
        }
    }
}

void print_cube(const COLOR cukka[][3][3])
{

    for (int i = 0; i < square; i++)
    {
        printf("\n \n");
        for (int j = 0; j < row; j++)
        {
            printf("\n");
            for (int p = 0; p < coll; p++)
            {
                printf("%d ", cukka[i][j][p]);
            }
        }
    }
}

int checkwin(COLOR cube[][3][3])
{

    for (int i = 0; i < square; i++)
    {
        int idk = cube[i][0][0];
        bool flag;
        for (int j = 0; j < coll; j++)
        {
            for (int y = 0; y < row; y++)
            {
                if (idk != cube[i][j][y])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag)
        {
            return 1; //failed
        }
        else
        {
            return 0; //success
        }
    }
    return 1;
}

void rightmove(COLOR cukka[][3][3],int sq,int r){
    int nonintersecting= 7-sq; 
    cukka[sq][r][0];
    for (int i = 0; i < square; i++)
    {
        if (i==nonintersecting);
        {
            continue;
        }
        switch (i)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }

        
    }
    

}
void leftmove(COLOR cukka[][3][3], int sq,int r){

}
void upmove(COLOR cukka[][3][3],int sq){

}
void downmove(COLOR cukka[][3][3], int sq){

}





int main()
{
    COLOR cube[6][3][3];           // cube from enums idk if it use more bbyte from char or not
    srand((unsigned int)time(0));  // seed for rand
    init(cube, square, row, coll); // init cube randomly
    print_cube(cube); // unsolved




    if (checkwin(cube)==0)
    {
        printf("\nsolved cube");
    }
    else
    {
        printf("\nnot solved");
    }
    
    
}

/*  
saklı herkesin hali pasaklı bi dünya bu mu yani


*/