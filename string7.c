#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];

    printf("\n enter two strings :");
    scanf("%s%s",str1,str2);

    if (strcmp(str2,str1)==0)
    {
        printf("\n strings are equal");
    }
    
    else if (strcmp(str2,str1)>0)
    {
        /* code */
        printf("\n first string is greater than second string ");
    }
    
    else
    {
        printf("\n second string is greater than first string");
    }
     return 0;
}