#include<stdio.h>
int main()
{
    int m,n,sum=0;
    int a[3][4],b[4][2],result[3][2];
    printf("\n enter the first matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n enter the second matrix");
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <2; j++)
        {
            scanf("%d",b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //calculate the result
            for (int k = 0; k < 4; k++)
            {
                /* code */
                sum+=a[i][k] * b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
        
    }

    //print the resultant matrix
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // print the result
            printf("%d \t",result[i][j]);
        }
        printf("\n");
    }
    
    
     return 0;
}