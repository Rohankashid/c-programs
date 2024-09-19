#include <stdio.h>
int main()
{
    int a=7;
    int *ptra=&a;
    printf("\n the address of pointer to  a is %p",&ptra);
    printf("\n the value of a is %d",*ptra);
    return 0;
}