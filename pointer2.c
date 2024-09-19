#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;

    printf("\n %u",&i);
    printf("\n%d",j);
    printf("\n %u",*k);
    printf("\n%u",&j);
    printf("\n %u",k);
    printf("\n %u",&k);
    printf("\n %u",j);
    printf("\n %d",i);
    printf("\n %d",*(&i));
    printf("\n %d",*j);
    printf("\n %d",**k);
    printf(sizeof(j));


     return 0;
}