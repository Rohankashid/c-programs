#include<stdio.h>
int main()
{
    int i,j,temp,n;

    printf("\n enter the size of the array :");
    scanf("%d",&n);
    int a[n];

    printf("\n enter the array elements :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n array elements are :");
    for ( i = 0; i < n; i++)
    {
       printf("%d\t",a[i]);
    }

    for ( i = 0; i < n-1; i++)
    {
        for(j=i+1;j<n;j++)
        if (a[j]>a[i+1])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
    }

    printf("\n the array after sorting is :");
    for ( i = 0; i<n; i++)
    {
       printf("%d",a[i]);
    }
    
     return 0;
}