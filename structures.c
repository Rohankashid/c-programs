#include<stdio.h>
#include<string.h>
void  main()
struct student;
{
      int id;
     int marks;
     char fav_char;
     char name[50];
};
rohan,vivek,prathmesh;
      void print()
{
     printf("%s",rohan.name);


}

void main()
{
     rohan.id=1;
     vivek.id=2;
     prathmesh.id=3;
     rohan.marks=100;
     vivek.marks=101;
     prathmesh.marks=103;
     rohan.fav_char='R';
     vivek.fav_char='V';
     prathmesh.fav_char='P';

     strcpy(rohan.name,"rohan is an average student");
     strcpy(vivek.name,"vivek is clever than rohan ");
     strcpy(prathmesh.name,"prathmesh is clever in all of these three students");
     print();


}