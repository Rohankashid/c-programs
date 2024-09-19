#include<stdio.h>
int myfunc(int a,int b)

{
    
    static int myvar;
    ("\n the myvar is %d",myvar);
myvar=a+b;
    return myvar;
}
int main()
{
    int a;
    int b;
    //declaration-the compiler about the variable
    //defenition - declaration+space reservation

    register int myvar=myfunc(3,5);
    myvar=myfunc(4,5);
    myvar=myfunc(4,5);
    myvar=myfunc(4,5);
    
    printf("\n the myvar is %d",myvar);

    return 0;
}