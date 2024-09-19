#include<stdio.h>
void arrayrev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
    
}
void arrayprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("\n the value of element %d is %d ",i,arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5,67};
   printf("\n before reversing the values are as follows\n");
   arrayprint(arr);
   arrayrev(arr);
   printf("\n after reversing the array the values are follows \n");
   arrayprint(arr);

     return 0;

}