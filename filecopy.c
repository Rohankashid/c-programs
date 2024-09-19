#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;

    fp1=fopen("abc.txt","r");
   

    fp2=fopen("xyz.txt","w");
    if(fp2==NULL)
    {
        printf("\n error ");
    }

    while ((ch=fgetc(fp1)!=EOF))
    {
        fputc(ch,fp2);
    }
    
    printf("\n successfully completed ");
    fclose(fp1);
    fclose(fp2);
     return 0;
}