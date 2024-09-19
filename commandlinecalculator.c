#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    char * operation;
    int num1, num2;
    operation=(argv[1]);
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("\n operation is %s", operation);
    printf("\n num1 is %d", num1);
    printf("\n num2 is %d", num2);
    return 0;
}
