#include<stdio.h>
int main()
{

     int n,j,i=0;
     int rem,a[10];
    
      printf("\n enter the decimal number :");
      scanf("%d",&n);
     while (n)
     {
         rem=n%2;
         n=n/2;
         a[i]=rem;
         i++;
     }
     for(j=i-1;j>=0;j--)
     {
          printf("%d",a[j]);
     }
     
     return 0;

}    
    
     