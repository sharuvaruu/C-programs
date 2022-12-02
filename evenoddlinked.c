#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *temp;
struct node *newnode;
int positive();
int negative();
int even();
int odd();

void main()
{   
    struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *temp;
struct node *newnode;
    head=NULL;
    int choice,count=0;
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
        printf("Do you want to continue :\n");
        scanf("%d",&choice);
    }
    printf("\n");
    temp=head;
    while(temp!=0)
    {
        printf("\n %d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n No. of nodes=%d",count);
    positive();
    negative();
    even();
    odd();

}
int positive()
{
    int pos=0;
    temp=head;
    while(temp->next!=0)
    {
        if(temp->data >=0)
        {
            pos++;
        }
        temp=temp->next;
    }
    printf("The count of positive integers %d",pos);
    return pos;
}
int negative()
{
    int neg=0;
    temp=head;
    while(temp->next!=0)
    {
        if(temp->data <0)
        {
            neg++;
        }
        temp=temp->next;
    }
    printf("The count of negative integers %d",neg);
    return neg;
}
int even()
{
    int even=0;
    temp=head;
    while(temp->next!=0)
    {
        if(temp->data %2==0)
        {
            even++;
        }
        temp=temp->next;
    }
    printf("The count of even integers %d",even);
    return even;
}
int odd()
{
    int odd=0;
    temp=head;
    while(temp->next!=0)
    {
        if(temp->data %2!=0)
        {
            odd++;
        }
        temp=temp->next;
    }
    printf("The count of odd integers %d",odd);
    return odd;
}