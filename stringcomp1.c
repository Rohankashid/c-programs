#include<stdio.h>
#include<string.h>
void compare(char[],char[]);
int main()
{
    char str1[10],str2[10];\

    printf("\n enter two strings :");
    scanf("%s%s",str1,str2);

    compare(str1,str2);
     return 0;
}

void compare(char str1[],char str2[])
{
    int i,flag;

    for ( i = 0; str1[i]!='\0'||str2[i]!='\0'; i++)
    {
        if (str1[i]!=str2[i])
        {
           flag=1;
           break;

        }
        
    }
     if (flag==1)
        {
            printf("\n not equal ");
        }
        else{
            printf("\n strings are equal");
        }
}