#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("random.txt","r");
    char ch;
   
   while(ch!=EOF){
    ch=fgetc(fptr);
    printf("%c",ch);
   }

   return 0;
}