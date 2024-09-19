#include <stdio.h>
void main()

{
    int fact, i, n;

    printf("\n enter an ineger number");
    scanf("%d", &n);

    fact = 1;
    for (i = n; i >=1; i--)
    {
        fact = fact * i;
    }
    printf("\n factorial of %d is %d", n, fact);
}