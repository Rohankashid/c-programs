#include <stdio.h>
#include <stdlib.h>
int *functionDangling()
{
    int a, b, sum;

    a = 34;
    b = 364;
    sum = a + b;
    return 0;
}

{
    // case 1 de allocation of memory block

    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // dangling now
}
// case2: function returning local variable adress
{
    int *dangPtr = functionDangling();
    int *dangling ptr3;

    // case3: if a variable goes out of space

    {
        int a = 12;
        danglingPtr = &a;
    }

    // here variable a goes out of spope which means danglingptr3 is poinitng to location which is freed and hence danglinfptr3 is now a dangling ptr

    return 0;
}