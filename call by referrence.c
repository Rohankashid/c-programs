#include<stdio.h>
void changevalue(int* address)
{
    *address = 3555555;
}
int main()
{
    int a=34,b=56;
    printf("\n the value of a is %d",a);
    changevalue(&a);
    printf("\n the value of a is %d",a);
     return 0;
}