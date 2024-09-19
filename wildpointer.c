#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a=4354;
     int *ptr;// this is wild pointer
     //*ptr=34; //this is not good to do so
     ptr=&a; //ptr is no longer a wild pointer
     printf("\n the value of a is %d",*ptr); 
     return 0;
}