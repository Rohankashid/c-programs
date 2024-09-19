#include<stdio.h>
int main()
{
    int a,b,temp,*p,*q;
    printf("\n enter the two numbers ");
    scanf("%d%d",&a,&b);

    printf("\n a=%d \n b=%d",a,b);

    p=*(&a);
    q=*(&b);

    p=temp;
    q=p;
    temp=p;

    printf("\n numbers after swapping are %d an %d  ",p,q);

     return 0;
}