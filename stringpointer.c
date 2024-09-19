#include <stdio.h>
int main()
{
    char name[] = "pranav";
    char *ptr;
    ptr = name;

    while (*ptr != '\0')
  
  
    {
        /* code */
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}