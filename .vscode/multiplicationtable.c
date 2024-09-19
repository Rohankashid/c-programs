#include <stdio.h>
void main()
{
    int num,i;
    printf("\n enter an intger number");
    scanf("%d", &num);
    printf("\n multiplication table of %d is as follows ", num);

    for (i = 1; i < 11; i++)
    {
        printf("\n %d x %d= %d\n", num, i, num * i);
    }
}