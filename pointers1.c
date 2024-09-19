#include <stdio.h>
void display(int *, int);

int main()
{
    int num[] = {24, 34, 12, 44, 56, 17};
    display(&num[0], 6);
    return 0;
}

void display(int *j, int n)
{
    int i = 1;
    while (i <= n)
    {
        /* code */
        printf("\n element=%d", *j);
        i++;
        j++; // increment pointer to point to next location
    }
}