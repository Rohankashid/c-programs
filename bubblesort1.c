#include<stdio.h>

void printarray(int* a,int n)
{
    
    for (int i = 0; i < n; i++)
    {
       printf("%d\n",a[i]);

    }
    printf("\n");
}

void bubblesort(int* a, int n)
{
    int temp,i,j;
    for (int i = 0; i < n-1; i++)//for no of passes 
    {
       for (int j = 0; j <n-1-i; j++)// for comparison in each pass
       {
        
          if (a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
       }
    } 
}
int main()
{
    //int a[10]={12,34,65,68,76,5};
    int a[5]={1,2,34,35,36};
    int n=5;
     
     printarray(a,n);//printing the array before the sorting

     bubblesort(a,n);//function for sorting the array

     printarray(a,n);// printing the array after sorting 
     return 0;
}