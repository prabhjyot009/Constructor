#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
    int data;
    struct node*next;
};
struct node*head;

void main()
{
    int choice=0;
    printf("\n stack\n");
    printf("\n*****\n");
    while(choice!=4)
    {
        printf("\nChoose\n");
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice)
       {
           case 1:
           {
               push();
               break;
           }
           case 2:
           {
               pop();
               break;
           }
           case 3:
           {
               display();
               break;
           }
           case 4:
           {
               printf("exiting***");
               break;
           }
           default:
           {
               printf("Please enter choice: ");
           }
       };
    }
}

void push()
{
    int item;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Not able to push element");
    }
    else
    {
        printf("Enter your value: ")
        scanf("%d"&item);
        if(head==NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->val=val;
            ptr->next=head;
            head=ptr;
        }
        printf("Item pushed");
    }
}

void pop()
{
    
}
