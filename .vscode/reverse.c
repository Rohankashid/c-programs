#include <stdio.h>
void main()

{
    long int n, m, reverse = 0;
    int digit;

    printf("\n enter an integer number");
    scanf("%d", &n);
    m = n;
    while (n != 0)

    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("\n oroginal number=%ld", m);
    printf("\n reverse number=%ld", reverse);
}