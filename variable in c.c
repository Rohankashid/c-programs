#include<stdio.h>
int b=34;// this is global variable since it is declared inside main()
int ret()
{
    return 43*3;
}

int func1( int b1)

{
    static int myvar;
    printf("\n the value of myvar   is %d ",myvar);
    myvar++;
    
    return b1+myvar;
}

int main()
{
    int b=344;
    int val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    val=func1(b);
    int *ptr =&val;
    return 0;
}