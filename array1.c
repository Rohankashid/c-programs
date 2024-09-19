#include<stdio.h>
int main()
{
    int marks[5],i,sum=0;
    float avg;

    for(i=0;i<5;i++)
    {
        printf("\n enter the marks of five subjects");
        scanf("%d",&marks[i]);

    }
    for (int i = 0; i < 5; i++)
    {
        sum=sum+marks[i];
    }
    printf("\n sum=%d",sum);
    {
        avg=(sum/5);
        printf("\n avg=%f",avg);
    }
    

     return 0;
}