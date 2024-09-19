#include <stdio.h>
int main()
{
    int a = 18;
    int * ptr2;
    int *ptr =&a;
    if ((ptr2 != NULL))
    {
        /* code */
        printf("\n the adress of a is %d", *ptr);
    }
    else
    {
        printf("\n thr pointer is null and can't be derefferenced ");
    }
    return 0;
}

