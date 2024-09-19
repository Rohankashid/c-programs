#include<stdio.h>
void product(int ,float);

void product(int a,float b)
{
    float c;
    c=a*b;
    printf("\n product = %f",c);
}
int main()
{
    int a;
    float b;


    printf("\n enter the values of a and b ");
    scanf("%d %f",&a,&b);

    product(a,b);
     return 0;
}


