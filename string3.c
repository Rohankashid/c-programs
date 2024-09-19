#include<stdio.h>
int main()
{
    char name[]="rohan";
    char *p;
    p=name;
    while (*p!='\0')
    {
        /* code */
        printf("%c",*p);
        p++;
    }
    

     return 0;
}