#include<stdio.h>
int main()

{
    int a[5]={73,53,1,43,765};
    int i,j,k,temp;
    printf("\n array before sorting :");
    for ( i=0; i<=4; i++)
    printf("\t%d",a[i]);

    for (k= 1; k < 5; k++)
    {
       temp=a[k];
       j=k-1;
       while (j>=0&&a[j]>temp)
       {
        a[j+1]=a[j];

        j=j-1;
       }
       a[j+1]=temp;
    }
    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("\n");
        printf("\t %d",a[i]);
    }
    
}
