#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float Edistance(int x1, int x2, int y1, int y2)
{
    int a=(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
    return sqrt(a);
}

float areaOfCircle( int x1, int x2, int y1, int y2,int (*distance)(int x1, int x2, int y1, int y2) )

{
    return distance(x1,y1,x2,y2);
}

int main()

{
    int x1,y1,x2,y2;
    float dst;
    
    printf("\n enter the value of x1");
    scanf("%d",&x1);

    printf("\n enter the value of x2");
    scanf("%d",&x2);

    printf("\n enter the value of y1");
    scanf("%d",&y1);

    printf("\n enter the value of y2");
    scanf("%d",&y2);

    dst=areaOfCircle(x1,y1,x2,y2,Edistance);

    printf("\n the distance between these points is %f",dst);

    return 0;

    
}

