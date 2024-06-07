#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
    struct node *head=NULL;
    int n;    
void push()
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&new->data);
    new->link=head;
    head=new;
}
void pop()
{
    struct node*k=head;
    if(head=NULL)
    {
        printf("no elements");
    }
    else
    k=k->link;
    n=k->data;
    head=k->link;
    free(k);
}
void show()
{
    struct node*k=head;
    while(k->link!=NULL)
    {
        printf("%d\n",k->data);
        k=k->link;
    }
}
void top()
{
    struct node*k=head;
    k=k->link;
    printf("%d",k->data);
}
int main()
{   int k;
    struct node*ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&ptr->data);
    head=ptr;
    ptr->link=NULL;
    while(1)
    {
    printf("enter the option");
    printf("\n1.insert\n2.delete\n3.top value\n4.show\n5.exit:");
    scanf("%d",&k);
    switch (k)
    {
    case 1:push();
        //show();
        break;
    case 2:pop();
        show();
        break;
    case 3:top();
        break;
    case 4:show();
        break;
    case 5:exit(0);
        break;
    default:
        printf("enter the valid input");
        break;
    }
    }
}
