#include<stdio.h>
#include<string.h>
void main()
{
    char name[10];
    int length;

    printf("\n enter the name :");
    scanf("%s",name);

    printf("\n name=%s",name);
    length=strlen(name);

    printf("\n number of characters in word are %d",length);
    
}