#include<stdio.h>
void main()
{
    int a[3],b[3],c[6],i,j,k=0;

    printf("\n enter the elements in set a: ");

    for(i=0;i<3;i++)       
    {
        scanf("%d",&a[i]);

    }

    printf("\n enter the elements of the set b:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);

    }

    printf("\n union of the two sets is :");

    for ( i=i+1;i<6;i++)
    {
        /* code */
        k=0;
        for(j=0;j<6;j++)
        {
            if (c[i]==a[j])
            {
                /* code */
                k=1;
                break;

            }
            
        }

        if (k==0)
        {
            /* code */
            printf("\t %d",c[i]);
        }
        
    }
    
}