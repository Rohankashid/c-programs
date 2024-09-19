#include<stdio.h>
int main()
{
    int a,b;

    printf("\n write the two numbers:");
    scanf("%d%d",&a,&b);

    a=a+b-a;
    b=b+a-b;

    printf("\n numbers after swapping are %d and %d",a,b);
     return 0;
}