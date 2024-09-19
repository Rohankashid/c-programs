#include<stdio.h>
struct driver
{
    /* data */
    char name[80];
char dlNo[80];
char route[45];
int kms;
};.
00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
int main()
{
    struct driver d1,d2,d3;
    printf("\n enter the details of the driver no 1 ");

    printf("\n enter the name of the first driver ");
    scanf("%s",&d1.name);

    printf("\n enter the dl no of the first driver ");
    scanf("%s",&d1.dlNo);

    printf("\n enter the route of the first driver ");
    scanf("%s",&d1.route);

    printf("\n enter the no of  kms of the first driver ");
    scanf("%s",&d1.kms);


     printf("\n enter the details of the driver no 2 ");

    printf("\n enter the name of the second driver ");
    scanf("%s",&d2.name);

    printf("\n enter the dl no of the second  driver ");
    scanf("%s",&d2.dlNo);

    printf("\n enter the route of the second  driver ");
    scanf("%s",&d2.route);

    printf("\n enter the no of  kms of the 2second  driver ");
    scanf("%s",&d2.kms);


     printf("\n enter the details of the driver no 3 ");

    printf("\n enter the name of the third driver ");
    scanf("%s",&d3);
    printf("\n enter the dl no of the third driver ");
    scanf("%s",&d3.dlNo);

    printf("\n enter the route of the third driver ");
    scanf("%s",&d3.route);

    printf("\n enter the no of  kms of the third driver ");
    scanf("%s",&d3.kms);

    printf("\n ##printing information of these drivers## :");

    printf("\nfor driver no 1 name is %s",d1.name);
    printf("\nDL no is %s",d1.dlNo);
    printf("\nroute is %s",d1.route);
    printf("\nno of kms is %d",d1.kms);

    printf("\nfor driver no 2 name is %s",d2.name);
    printf("\nDL no is %s",d2.dlNo);
    printf("\nroute is %s",d2.route);
    printf("\nno of kms is %d",d2.kms);

    printf("\nfor driver no 3 name is %s",d3.name);
    printf("\nDL no is %s",d3.dlNo);
    printf("\nroute is %s",d3.route);
    printf("\nno of kms is %d",d3.kms);


}

