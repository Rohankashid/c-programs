#include<stdio.h>
//structure of the array 
struct array{
     int a[10];
     int size ;
     int length;
};


// function to display the array
void display(struct array arr)
{
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        printf("%5d",arr.a[i]);
    }
    
}

//function that swap two diff elements at diff locations 
void swap(int* x, int*y)
{
    //store the value at the x in a variable temp 
    int temp=*x;

    //swapping of the value 
    *x=*y;
    *y=temp;

}
//function that performs the linear search 
int LinearSearchTransposition(struct array* arr , int key)
{
    int i;
    for ( i = 0; i < arr->length; i++)
    {
        if (key==arr->a[i])
        {
            if (i==0)
           return i;

           swap(&arr->a[i],&arr->a[i-1]);
           return i;
            
        }
        
    }
    return -1;
    
}
//main func 
int main()
{
    struct array arr={{2,23,14,5,6,9,8,12},10,8};

    printf("\n elements before linear search transposition :");
    display(arr);
    LinearSearchTransposition(&arr,14);

    printf("\n elements after linear search transposition :");

    display(arr);
    return 0;
    }