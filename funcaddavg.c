//C Program to Find the Sum and Average of n Numbers Using Function

#include<stdio.h>
int sum(int);
int average(int, int);
int main()
{
  int n, s;
  float avg;

  printf("\nEnter How many Number you want?\n");
  scanf("%d",&n);
 
   s = sum(n);                     //calling function to calculate sum

  avg = average(s,n);
      //calling function to calculate Average

  printf("\nSum of %d Numbers = %d",n, s);
  printf("\nAverage of %d Numbers = %.2f",n, avg);

  return 0;
}

int sum(int n)
{
  int i, sum=0, num;

  printf("\nEnter elements one by one\n");
  for(i=0;i<n;i++)
   {
     scanf("%d",&num);
     sum = sum +num;
   }
   return (sum);
}

int average(int s, int n)
{
  float avg;
  avg = s/(float)n;
  return (avg);
}