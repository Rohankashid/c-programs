#include<stdio.h>
#define PI 3.14
void main()
{
     float r,a,c;
     printf("\n enter the value of radius");
     scanf("%f",&r);

     a=PI*r*r;
     c=2*PI*r;

     printf("\n area=%f",a);
     printf("\n circumferrence=%f",c);
     

}