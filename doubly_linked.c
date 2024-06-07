#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* prevlink;
    struct node* nextlink;
};
struct node*head=NULL;
void insertion()
{
    struct node*temp;
    struct node*k=head;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",new->data);
    while(k->nextlink!=NULL)
    {
        k=temp;
        k=k->nextlink;
    }
    k->nextlink=new;
    new->prevlink=temp;
    new->nextlink=NULL;

}
int main()
{
    int n=1;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->prevlink=NULL;
    ptr->nextlink=NULL;
    printf("enter the data");
    scanf("%d",&ptr->data);
    while(n==1)
    {   printf("to insert 1")
        scanf("%d",&n);
        insertion();
    }
}