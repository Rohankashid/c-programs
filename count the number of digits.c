#include <stdio.h>
void main()
{
    long int m, n;
    int count = 0;

    printf("\n enter  an integer number ");
    scanf("%ld", &n);
    m = n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("\n number of digits in %d are %d", m, count);
}