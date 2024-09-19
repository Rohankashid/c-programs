#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    // input first matrix elements
    for (i = 0; i < 3; i++) // rows

    {
        for (j = 0; j < 3; j++) // columns
        {
            printf("\n enter a[%d][%d]=", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    // input second matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n b[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // calculate addition
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // display sum of matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n %5d", c[i][j]);
        }printf("\n");
    
        
    }
    
}
