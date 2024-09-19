#include <stdio.h>
int func1(int array[])
{
     int i,j;
     for (int i = 0; i < 4; i++)
     {
          printf("\n the value at %d is d\n", i, array[i]);
     }
     return 0;
}

void func2(int *ptr)
{  int i,j;
     for (i = 0; i < 4; i++)
     {
          printf("\n the value at %d ia %d", i, *(ptr + i));
     }
     *(ptr + 2) = 6532;
}

void func3(int arr[2][2])
{
     int i,j;
     for (int  i= 0; i < 2; i++)
     {
          for (j = 0; j < 2; j++)
          {
               printf("\n the value at %d is %d",i,j,arr[i],arr[j]);
          }
     }
}
int main()
{     
     int i,j;
     int arr[][2] = {{2, 13}, {9, 3}};
     func3(arr);
     return 0;
}