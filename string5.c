#include<stdio.h>
#include<string.h>
void main()
{
     char name[20],surname[20];

     printf("\n enter the name :");
     scanf("%s",name);

     printf("\n enter the surname:");
     scanf("%s",surname);

     strcat(name,surname);

     printf("\n the full name is %s",name);

}