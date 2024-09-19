#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("\n enter the number of rows and columns you want to print");
    scanf("%d %d", &m &n);

    for(j=1;j<=n;j++)
    {
        for (int i=1; i <=n; i++)
        {
            /* code */
            printf("*");
        }printf("\n");
        
    }
     


     return 0;
}