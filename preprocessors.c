#include<stdio.h>
#include"danglingpointer.c"
# define PI 3.14
#define SQUARE

int main()

{
    float var;
    int r=4;
    int * ptr = functionDangling();
    printf("\n the value of PI is %f",var);
    printf("\n the area of circle is %f",PI * SQUARE(r));
     return 0;
}