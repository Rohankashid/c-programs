#include<stdio.h>
int main()
{
    struct book
    {
        /* data */
        char name;
        char author;
        int callno;
    };

    struct book b1={"Let us C","YPK",101};
    struct book *ptr;

    ptr=&b1;
    printf("\n %s%s%d",b1.name,b1.author,b1.callno);
    printf("\n %s%s%d",ptr->name,ptr->author,ptr->callno);
   
    
     return 0;
}