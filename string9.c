#include<stdio.h>
#include<string.h>
void cat(char[],char[]);
void main()
{
   char str1[10],str2[10];
   printf("\n enter the strings :");
   scanf("%s%s",str1,str2);

   cat(str1,str2);

  
}

void cat(char str1[],char str2[])
{
     int len1,len2,i;

     len1=strlen(str1);
     len2=strlen(str2);

     for ( i = 0; i <=len2; i++)
     {
        /* code */
        str1[len1+i]=str2[i];
     }

     printf("\n string after concatenation is %s",str1);
     
}