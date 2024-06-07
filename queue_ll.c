#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *link;
};
    struct node*head=NULL;
int f=-1;
int r=-1;
int n;
void insertion()
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    if(f==-1&&r==-1)
    {
        f++;
        r++;
        printf("enter the element");
        scanf("%d",&new->data);
        head=new;
        new->link=NULL;
    }
    else if(r>n)
    {
        printf("queue is full");
    }
    else
    {
        r++;
        struct node*k=head;
        while(k->link!=NULL)
        {
        k=k->link;
        }
        printf("enter the element");
        scanf("%d",&k->data);
        k->link=new;
        new->link=NULL;
    }
}
void deletion()
{
    struct node*k=head;
    if(f<=r)
    {
       f++;
       k=k->link;
       head=k;
       free(k);
    }
    else
    printf("unedrflow");
}
void show()
{
    struct node*k=head;
    if(k->link=NULL)
    printf("%d",k->data);
    else
    while(k->link!=NULL)
    {
        printf("%d ",k->data);
        k=k->link;
    }
}
int main()
{
    int opt;
    printf("enter the size of the queue");
    scanf("%d",&n);
    while(1)
    {
        printf("1.Insertion\n2.Deletion\n3.show\n4.Exit");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:insertion();
            show();
            break;
        case 2:deletion();
            show();
            break;
        case 3:show();
            break;
        case 4:exit(0);
            break;
        default:printf("enter the valid input");
            break;
        }
    }
}