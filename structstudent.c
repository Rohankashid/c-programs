#include<stdio.h>
int main()
{
    int i,sum=0;
    float avg;

    struct student
    {
        int roll_no;
        char name[10];
        char gender[5];
        int marks[5];
    }m;

    printf("\n enter the roll no,name and gender of the student :");
    scanf("%d%s%s",&m.roll_no,m.name,m.gender);

    printf("\n roll no=%d",m.roll_no);
    printf("\n name of the student is = %s",m.name);
    printf("\n gender of the student is %s",m.gender);


   for(i=0;i<5;i++)
   {
    printf("\n enter the marks of the student :");
    scanf("%d",&m.marks[5]);
   }
for ( i=0;i<5;i++)
{
   sum=sum+i;
    
}
printf("\n sum of his marks is %d",sum);




    
     return 0;
}