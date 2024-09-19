#include<stdio.h>
int main()
{
    int a,b,*p,*q,sum;
     printf("\n enter the values of a and b:");
     scanf("%d%d",&a,&b);

     p=&a;
     q=&b;

     sum=*p+*q;

     printf("\n sum of two numbers is %d",sum);
     
     return 0;
}