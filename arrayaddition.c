#include<stdio.h>
int main()
{
    int a[5];
    int sum=0;
    printf("\n enter the array elements");
    for (int i = 0; i < 5; i++)
    {
        /* code */
  
        scanf("%d",&a[i]);

    }
    for (int i = 0; i < 5; i++)
    {
        /* code */sum=sum+a[i];
    }
    
printf("\n sum=%d",sum);

     return 0;
}