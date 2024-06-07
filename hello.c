#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*head=NULL;
void traverse()
{
    struct node*k;
    while(k!=NULL)
    {
        printf("%d",k->data);
        k=k->link;
    }
}
void beg()
{

}
void pos()
{

}
void end(struct node*head)
{
    struct node*k;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    while(k!=NULL)
    {
        k=k->link;
        printf("while");
    }
    printf("enter hte ele");
    scanf("%d",&temp->data);
    k->link=temp;
    temp->link=NULL;
}
int main()
{
    int n;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->link=NULL;
    head=ptr;
    printf("enter hte elem");
    scanf("%d",&ptr->data);
    m:
    printf("1,2,3");
    scanf("%d",&n);
    switch (n)
    {
    case 1:beg();
    
            break;
    case 2:pos();
        break;
    case 3: end(head);
            traverse();
        break;
    default:
        exit(0);
    }
    goto m;
}