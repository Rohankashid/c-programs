#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
   
};

struct node *head;
void insertion_beg();
void insertion_end();
void insertion_specified();
void deletion_beg();
void deletion_end();
void deletion_specified();
void display();
void search();

void main()
{
    int choice=0;
    while (choice!=9)
    {
       printf("\n1. insert at beggining \n2.insert at the end \n3.insert at the specified location: \n4.delete at the begginiung: \n5. delete at the end of the list: \n6. delete at the specified location of the list : \n7.search \n8.show or display the list : \n9.exit");

       printf("\n enter your choice :");
       scanf("%d",&choice);

       switch (choice)
       {
          case 1:
          insertion_beg();
          break;

           case 2:
          insertion_end();
          break;

           case 3:
          insertion_specified();
          break;

           case 4:
          deletion_beg();
          break;

           case 5:
          deletion_end();
          break;

           case 6:
          deletion_specified();
          break;

           case 7:
          search();
          break;

           case 8:
          display();
          break;

           case 9:
          exit(0);
          break;

          default:
          printf("\n wrong choice ");
       }
    }
}

void insertion_beg()
{
    int item;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
       printf("\n list id overflow");
    }
    else {
        printf("\n enter the value to be inserted :");
        scanf("%d",&item);

        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->data=item;
            head=ptr;
        }
        else{
            ptr->data=item;
            ptr->prev=NULL;
            ptr->next=head;
            head->prev=ptr;
            head=ptr;

        }
        printf("\n node inserted");
    }
}

void insertion_end()
{
    struct node *ptr,*temp;
    int item;

     ptr=(struct node*)malloc(sizeof(struct node));

     if (ptr==NULL)
     {
        printf("\n list is overflow");
     }
     
else
{
    printf("\n enter the value:");
    scanf("%d",&item);
    ptr->data=item;
    if (head==NULL)
    {
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
    }
   else
   {
    temp=head;
    while (temp->next!=NULL)
    {
        item=temp->next;
    }

    temp->next=ptr;
    ptr->prev=temp;
    ptr->next=NULL;
    
   } 
}
printf("\n node inserted");
}


void insertion_specified()
{

   struct node *ptr,*temp;
    int item,loc,i;

     ptr=(struct node*)malloc(sizeof(struct node));

     if (ptr==NULL)
     {
        printf("\n list is overflow");
     }

     else
     {
        temp=head;
        printf("\n enter the location:");
        scanf("%d",&loc);
        for(i=0;i<loc;i++)
        {
            temp=temp->next;
            if (temp==NULL)
            {
                printf("\n there are less than %d elements in the list ",loc);
                return;
            }
            
        }
     }

        printf("\n enter the item to be inserted :");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=temp->next;
        ptr->prev=temp;
        temp->next=ptr;
        temp->next->prev=ptr;
        printf("\n node is inserted in the list ");
     }
      
        


void deletion_beg()
{
    struct node *ptr;
    if (head==NULL)
    {
        printf("\n underflow");
    }
    else if (head->next==NULL)
    {
        head==NULL;
        free(head);
        printf("\n node is deleted ");
    }
   else{
    ptr=head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
    printf("\n node is deleted");
   } 
    
}

void deletion_end()
{
    struct node *ptr;
    if (head==NULL)
    {
        printf("\n underflow");
    }
    else if (head->next=NULL)
    {
        head==NULL;
        free(head);
        printf("\n node id deleted ");
    }
    else
    {
        ptr=head;
        if (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        free(ptr);
        printf("\n node is deleted ");
    }
    
}

void deletion_specified()
{
    struct node *ptr,*temp;
    int val;

    printf("\n enter the date after the node is to be deleted :");
    scanf("%d",&val);

    ptr=head;
    while (ptr->data!=val)
    {
        ptr=ptr->next;
    }
    if (ptr->next==NULL)
    {
        printf("\n cant delete the node ");
    }
    
    else if (ptr->next->next==NULL)
    {
        ptr->next=NULL;
    }
    else{
        temp=ptr->next;
        ptr->next=temp->next;
        temp->next->prev=ptr;
        free(temp);
      printf("\n node is deleted ");
    }
}

void display()
{
    struct node *ptr;
    printf("\n printing the values in the list:");
    ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

void search()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr=head;

   if (ptr==NULL)
   {
    printf("\n the list is empty");
   }
   else{
    printf("\n enter the value nto search:");
    scanf("%d",&item);

    while (ptr!=NULL)
    {
        if (ptr->data==item)
        {
           printf("\n value found at %d location",i+1);
           flag=0;
           break;
        }else{
            flag=1;
        }
        i++;
        ptr=ptr->next;
    }
    if (flag==1)
    {
        printf("\n value does not found it the given list ");
    }
    
   }
    
}