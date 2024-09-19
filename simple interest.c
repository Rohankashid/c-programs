// title:- amount receivable
#include <stdio.h>
void main()
{
    float r, p, si, amt;
    int n;

    printf("\n enter the principal amount");
    scanf("%f", &p);
    printf("\n enter th rate of interst");
    scanf("%d", &r);
    n = 5;

    si = p * n * (r / 100);
    amt = p + si;

    printf("\n amount receivable=%f", amt);
}