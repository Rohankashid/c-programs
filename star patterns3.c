#include <stdio.h>
void main()

{
    int i, j, n;

    printf("\n enter the number of rows");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            /* code */
            printf("4 *");
        }
        printf("\n");
    }
}