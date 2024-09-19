#include<stdio.h>
int main()
{
    int a=345;
    float b=10.67;

    void *ptr;
    ptr=&b;
    
    printf("\n the value of b is %f",*((float*)ptr));
    ptr=&a;
    printf("\n the value of a is %d ",*((int*)ptr));
}



