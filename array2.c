#include<stdio.h>
int main()
{
    int a[10],i,even=0,odd=0;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("\n enter array elements ");
        scanf("%d",&a[5]);
    }
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if (a[i]%2==0)
        {
            /* code */
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\n even no=%d",even);
    printf("\n odd no=%d",odd);
    
    
     return 0;
}