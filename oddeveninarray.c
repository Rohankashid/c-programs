#include<stdio.h>
int main()
{
    int a[10],i,even=0,odd=0;

    printf("\n enter array elements");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
       if (a[i]%2==0)
       {
        /* code */even++;
        /* code */
       }
          else 
          {
            /* code */
            odd++;
          }
          
    }
    printf("\n even no=%d",even);
    printf("\n odd no=%d",odd);
     return 0;
}