#include <stdio.h>
void starpattern(int rows)
{
    for (int i=0; i < rows; i++)
    {
        for ( int j= 0; j <=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows,i,j;
    printf("\n how many rows do you want to print?");
    scanf("%d", &rows);
    starpattern(rows);
}