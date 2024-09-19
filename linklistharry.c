#include<stdio.h>
#include<stdlib.h>

struct node{
     int data;
     struct node * next;
};

void traversal(struct node *ptr){

while (ptr!=NULL)

{
     printf("element :%d\n",ptr->data);
     ptr=ptr->next;
}
}
int main()
{
    struct node * head;
    struct node * second;
    struct node * third;

    //allocate memory for nodes in the linked list in heap
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
   //link nodes
   head->data=7;
   head->next=second;

   //second and third
   head->data=11;
   head->next=third;

   //terminate the list after the 3rd node 
   third->data=66;
   head->next=NULL;
  
  traversal(head);
     return 0;
}