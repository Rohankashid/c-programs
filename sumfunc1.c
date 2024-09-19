#include<stdio.h>
int sum(int,int);
int average(int,int);

int sum(int n, int num)
{
    int sum=0,summation,i;
     for ( i = 0; i < n; i++)
     
    {
        summation=sum+num;
    }
    return (summation);
}

int average(int s,int n)
{
    float avg;

    {avg=s/(float)n;
    }

    return (avg);  

}

int main()
{
    int i,n,s,num;
    float avg;

    printf("\n enter how much numbers you want to enter ?");
    scanf("%d",&n);

    printf("\n enter %d numbers :",n);
     
     for ( i = 0; i < n; i++)
     {
        /* code */
        scanf("%d",&num);
     }
     
     s=sum(n,num);
     avg=average(s,n);

     printf("\n sum of %d numbers = %d",n,s);
     printf("\n average of %d numbers = %d",n,avg);

     return 0;

}