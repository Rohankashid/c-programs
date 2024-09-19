#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];

    printf("\n enter the name :");
    scanf("%s",name);

    strrev(name);

    printf("\n the reversed string id %s",name);
     return 0;
}