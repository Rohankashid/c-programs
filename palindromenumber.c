#include<stdio.h>
int main()
{
    long int n,m,reverse=0;
    int digit;

    printf("\n enter an integer number");
    scanf("%ld",&n);

    m=n;
    while (n!=0)
    {
     /* code */
     digit=n%10;
     reverse=reverse*10+digit;
     n=n/10;
    }
    
printf("\n original number=%d",m);
printf("\n reversed number=%ld",reverse);


if ( m==reverse )
{
     printf("\n given number is palindrome ");
}
else
{
     printf("\n given number is not palindrome");
}


     return 0;
}