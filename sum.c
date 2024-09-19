#include <stdio.h>
void main()
{
    int sum, n,i;
    sum = 0;

    printf("\n enter the number upto which you want the sum:");
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        sum = sum + i;
    }
    printf("\n sum=%d", sum);
}