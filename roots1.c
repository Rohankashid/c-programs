#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,d;

    printf("\n enter the values of a ,b and c:");
    scanf("%f%f%f",&a,&b,&c);

    d=(b*b)-4*a*c;

     printf("\n the value of the discriment is %f",d);

    if (d=0)
    {
        printf("\n the roots are real and equal ");

        r1=r2=-b/(2*a);

        printf("\n two roots are %f and %f",r1,r2);
        
        
    }
    
 
     
    if (d>0)
    {
        printf("\n the roots are real and unequal ");

        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;

        printf("\n two roots are %f and %f",r1,r2);
        
        
    }

    if (d<0)
    {
        printf("\n the roots are imaginery ");

        r1=-b+(sqrt(d)/2*a);
        r2=-b-(sqrt(d)/2*a);

        printf("\n two roots are %f and %f",r1,r2);
        
        
    }
   
   
     return 0;
}