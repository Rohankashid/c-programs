// largest among three numbers
#include <stdio.h>
void main()
{
    int n1, n2, n3;

    printf("\n enter first number");
    scanf("%d", &n1);

    printf("\n enter second number");
    scanf("%d", &n2);

    printf("\n enter third number");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("\n %d is largest", n1);
    }
    else if (n2 > n3)
    {
        printf("\n %d is largest", n2);
    }
    else
    {
        printf("\n %d is largest", n3);
    }
}