#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[10];
    int i,len1,len2;

    printf("\n enter two strings :");
    scanf("%s%s",str1,str2);

    len1=strlen(str1);
    len2=strlen(str2);
    for ( i = 0; i < len2; i++)
    {
       str1[len1+i]=str2[i];
    }
    
    printf("\n string after combining is %s",str1);
     return 0;
}