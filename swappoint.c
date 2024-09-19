#include<stdio.h>
int main()
{
    int a,b;

    printf("\n enter the values of a and b:");
    scanf("%d%d",&a,&b);

    printf("\n numbers before swapping are : %d and %d",a,b);

 a=a+b;
 b=a-b;
 a=a-b;

   

    printf("\n numbers after swapping are %d and %d",a,b);

  return 0;
}