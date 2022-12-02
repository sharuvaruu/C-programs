#include<stdio.h>
#include<stdlib.h>
void at_beginning();
void at_end();
void at_position(int);
void display();


    struct node{
        int data;
        struct node *next;
    };
    struct node *head;
    struct node *newnode;
    struct node *temp;
    int main()
    {
    head=NULL;
    int choice=1;
    int op=1;
    int count;
    int a;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue (0,1)?:\n");
        scanf("%d",&choice);
    }
    printf("\n");
    temp=head;
    while(temp!=0)
    {
        temp=temp->next;
        count++;
    }
    while(op)
    {
    printf("Which operations do you want to perform ?\n1.Insert at the beginning\n2.Insert at the end\n3.Insert at specific position\n4.Displaying the linked list\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        at_beginning();
        display();
        break;
        case 2:
        at_end();
        display();
        break;
        case 3:
        at_position(count);
        display();
        break;
        case 4:
        display();
        break;
    }
    printf("\n Do you want to continue the operations(1/0)?\n");
    scanf("%d",&op);
    }
    return 0;
    }
void at_beginning()
{
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data you want to insert at the beginning\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->next=head;
    head=newnode;

}
void at_end()
{
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert at the end of the linked list");
    scanf("%d",&newnode->data);
    newnode->next=0;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
  temp->next=newnode;
}
void at_position(int count)
{
    int pos,i=1;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data you want to insert at a position in linked list");
    scanf("%d",&newnode->data);
    newnode->next=0;
    printf("Enter the position you want to insert:\n");
    scanf("%d",&pos);
    if(pos<0||pos>count)
    {
        printf("Can't be modified\n");
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
  }
    void display()
    {
        temp=head;
        printf("Your linked list is:\n");
        while(temp!=0)
        {
            printf("%d \t",temp->data);
            temp=temp->next;
        }
    }



    


    
