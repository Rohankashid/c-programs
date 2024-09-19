#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    int i,flag;

    printf("\n enter the two string :");
    scanf("%s%s",str1,str2);

    for ( i = 0; str1[i]!='\0'|| str2[i]!='\0'; i++)
    {
        if (str1[i]!=str2[i])
        {
           flag=1;
           break;
        }
        
    }

    if (flag==1)
    {
        /* code */
        printf("\n strings are not equal");
    }
    else
    {
        printf("\n strings are eqaul");
    }
    
    
    
     return 0;
}