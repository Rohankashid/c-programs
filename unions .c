#include<stdio.h>
#include<string.h>
union s1;
{
    int id;
    int marks;
    char fav_char;
    char name[35];
};
int main()
{
    union student s1;
    strcpy(s1.name,"rohan");
    s1.fav_char=45;
    s1.id
    
}