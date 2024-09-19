#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, r1, r2, d;

    printf("\n enter the values of a b and c :");
    scanf("%f%f%f", &a, &b, &c);

    d=(b*b)-4*a*c;
    if (d == 0)
    {
        printf("\n roots are real and equal");

        r1 = r2 = -b / (2 * a);

        printf("\n the values of r1 and r2 are %f %f", r1, r2);

    }   
    
    else if (d>0)
    {
        printf("\n roots are real and unequal");

        r1=(-b+sqrt(d))/2*a;
         r1=(-b-sqrt(d))/2*a;

         printf("\n the values of r1 and r2 are %f %f",r1,r2);
    }
    else
    printf("\n roots are imaginery ");
    r1=-b+sqrt(d/2*a);
    r2=-b-sqrt(d/2*a);

    printf("\n values of r1 and r2 are %f %f",r1,r2);
    

    return 0;
}