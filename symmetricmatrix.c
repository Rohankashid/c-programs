#include<stdio.h>
int main()
{
    int i,j,n,flag=0;
    
    printf("\n enter the size of the matrix :");
    scanf("%d",&n);

    int a[n][n],b[n][n];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("\n enter the elements of the matrix :");
            scanf("%d",&a[i][j]);
        }  
    }
    
    
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("\t %d",a[i][j]);
           
        }
       printf("\n"); 
    }

     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
           b[i][j]=a[j][i];
        }  
    }

     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
           if (a[i][j]!=b[i][j])
           {
            flag=1;
            break;
           }
           
        }  
    }

    if (flag==0)
    {
        printf("\n given matrix is symmetric ");
    }
    else
    printf("\n the matrix is not symmetric");

    return 0;

}
    