#include <stdio.h>
void main()

/*{

    long int m, n, count;
    int sum = 0, digit;

    printf("\n enter an integer number");
    scanf("%d", &n);
    m = n;
    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("\n sum of digits in %d is %d", m, sum);
}
*/


{
    int number,sum=0,m,digit;

    printf("enter the number:");
    scanf("%d",&number);
    m=number;

    while (number!=0)
    {
        /* code */
        digit=number%10;
        sum=sum+digit;
        number=number/10;
    }

    printf("the sum of numbers in %d is %d",m,sum);
    
}