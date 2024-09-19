#include<stdio.h>


int main(int argc, char const *argv[])

{
    /* code */
    printf("\n the value of argc is %d",argc);
    for (int i = 0; i < argc; i++)
    {
        /* code */
        printf("\n this argument at index  no %d has value of %s",i,argv[i]);

    }
    
    return 0;
}
