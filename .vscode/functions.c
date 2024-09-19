#include <stdio.h>
int i;
int sum(int a, int b);
void printstar(int n)
{
    for (i = 0; i < n; i++)
    {
        printf("d", '*');
    }
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printstar(7);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
