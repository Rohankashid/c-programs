#include<stdio.h>
int main()
{
    struct biodata
    {
        int rollno;
        char name[15];
        float weight;
    };

    struct biodata r1,r2,r3;

    printf("\n enter roll no,names and weights");
 scanf("%d%s%f",&r1.rollno,&r1.name,&r1.weight);
 scanf("%d%s%f",&r2.rollno,&r2.name,&r2.weight);
 scanf("%d%s%f",&r3.rollno,&r3.name,&r3.weight);
   
printf("roll no=%d\n name=%s\n weight=%f\n",r1.rollno,r1.name,r1.weight);
printf("roll no=%d\n name=%s\n weight=%f\n",r2.rollno,r2.name,r2.weight);
printf("roll no=%d\n \nname=%s\n weight=%f\n",r3.rollno,r3.name,r3.weight);


}