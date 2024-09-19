#include<stdio.h>
void sum( int ,int );

void sum(int a,int b)
{
    int c;
    c=a+b;
     printf("\n addition =%d",c);
}


int main()
{
    int a,b;

    printf("\n enter the values of a and b");
    scanf("%d %d",&a,&b);

    sum( a, b);

   
     return 0;
}