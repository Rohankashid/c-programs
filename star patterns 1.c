#include<stdio.h>
void main()

{
    int i,space,j,n;

    printf("\n enter the number of rows");
    scanf("%d",&n);

    for (  i=0; i<=n;i++)
    {
        for ( space=1;space<=(n-1);space++)
        {
            /* code */
            printf(" ");
        }
        for ( j = 0;  j<=(2*i)-1; j++)
        {
            /* code */
            printf("*");
        }  
        printf("\n");
        
        
    }
    
    
    
}