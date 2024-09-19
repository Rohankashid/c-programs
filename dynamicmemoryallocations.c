#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        /* code */
        printf("\n employee%d:enter the numbers of characters in your employee id", i + 1);
        scanf("%d", &chars);
        getchar();
            printf("\n enter the value of a ");
        scanf("%c", &a);
        getchar();
            printf("\n enter the value of b");
        scanf("%c", &b);

        ptr = (char*) malloc((char)) +1*sizeof(char);

        printf("\n enter your employee id");
        scanf("%d", &ptr);

        printf("\n your employee id is %s", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}