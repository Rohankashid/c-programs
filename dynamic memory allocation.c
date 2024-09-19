#include<stdio.h>
#include<stdio.h>
int main()
{
    // use of malloc
    int *ptr;
    int n;
    printf("\n enter the size of te array you want to create");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\n enter the value no %d of this array",i);
        scanf("%d",&ptr[i]);

    }
    for (int i = 0; i < n; i++)
    {
        printf("\n the value at %d of this array is %d ",i,ptr[i]);
    }
    
     return 0;
}