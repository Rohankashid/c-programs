#include<stdio.h>
int main()
{
    int i,j,n,flag=0;
    
    printf("\n enter the size of the matrix :");
    scanf("%d",&n);

    int a[n][n];

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
           if (i==j&&a[i][j]==1)
           {
            flag++;
           }
           
        }
        
    }
    if (flag==n)
    {
        printf("\n given matrix is reflexive matrix ");
    }
    else{
        printf("\n matrix is not reflexive ");
    }
    
     return 0;
}