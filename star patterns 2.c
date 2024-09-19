#include <stdio.h>
void main()

{
    int i, space, j, n;

    printf("\n enter the number of rows");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        /* code */
        for (space = 1; space <= (n - i); space++)
        {
            /* code */
            printf(" ");
        }
        for (j = 1; j <= 1; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
}
