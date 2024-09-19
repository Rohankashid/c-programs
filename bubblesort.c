#include<stdio.h>
int main()
{
    int a[5]={73,53,1,43,765};
    int i,j,temp;
    printf("\n array before sorting :");
    for ( i=0; i<=4; i++)
    {
        /* code */
        printf("\t%d",a[i]);
    }  
        for ( i=0; i<=3; i++)
        {
            for ( j=0; j<=3-i; j++)
            {
               if (a[j]>a[j+1])
               {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
               }
               
            }
            
        }
        printf("\n array after sorting : ");
        for ( i=0; i<=4; i++)
    
        /* code */
        printf("\t%d",a[i]);
    
     return 0;
    }
