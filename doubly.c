#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev; 
};
    struct node*head=NULL;
void insert_end()
{
    struct node *temp;
    struct node *k=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&new->data);
    while(k->next!=NULL)
    {
        temp=k;
        k=k->next;
    }
    k->next=new;
    new->prev=k;
    new->next=NULL;
}
void insert_pos()
{
    int i=1,pos;
    struct node*temp;
    struct node*k=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("enter the pos to insert");
    scanf("%d",&pos);
    printf("enter the element");
    scanf("%d",&new->data);
    if(pos==1)
    {
        new->next=head;
        new->prev=NULL;
        k=k->next;
        k->prev=new;
        head=new;
    }
     else
    {
        for(i;i<pos;i++)
        {
            temp=k;
            k=k->next;
        }
        new->next=k->prev;
        new->prev=k;
    }
}
void insert_beg()
{
    struct node*k=head;
    struct node*new=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    new->prev=NULL;
    k=k->next;
    k->prev=new;
}
void traverse()
{
    int i=1;
    struct node*k=head;
    while(k!=NULL)
    {
        printf("%d)%d  ",i,k->data);
        k=k->next;
        i++;
    }
}
void del_beg()
{
    struct node*k=head;
    k=k->next;
    head=k->next;
    k=k->next;
    k->prev=NULL;
}
void del_pos()
{
    int pos,i=1;
    struct node*k=head;
    struct node*temp;
    printf("enter the pos to delete");
    scanf("%d",&pos);
    for(i;i<pos-1;i++)
    {
        temp=k;
        k=k->next;
    }
    temp->next=k->next;
    free(k);
}
void del_end()
{
    struct node*k=head;
    struct node*temp;
    while(k!=NULL)
    {
        temp=k;
        k=k->next;
    }
    temp->next=NULL;
    free(k);
}
void search_i()
{
    int i,z=1;
    struct node*k=head;
    printf("enter the index");
    scanf("%d",&i);
    for(z;z<i;z++)
    {
        k=k->next;
    }
    printf("%d is at %d",k->data,i);
}
void search_e()
{
    int ele,i=1;
    struct node*k=head;
    printf("enter the element to search");
    scanf("%d",&ele);
    while(k!=NULL)
    {
        k=k->next;
        if(k->data==ele)
        {
            printf("%d element is at %d index",ele,i);
        }
        i++;
    }
    
}
void reverse()
{

}
int main()
{
    int n=1,choice,in,del,s;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&ptr->data);
    head=ptr;
    ptr->next=NULL;
    ptr->prev=NULL;
    while(1)
    {//system("cls");
    printf("enter your option");
    printf("\n1.insertion\n2.deletion\n3.searching\n4.reverse\n5.show\n6.exit:\n");
    scanf("%d",&choice);
    if(choice==1)//insertion
    {
        while(in!=4)
        {
        system("cls");
        traverse();
        printf("\ninsertion\n1.beg\n2end\n3.pos:");
        scanf("%d",&in);
        switch (in)
        {
        case 1:system("cls");
            insert_beg();
            //traverse();
            break;
        case 2:system("cls");
            insert_end();
            traverse();
            break;
        case 3:system("cls");
            insert_pos();
            traverse();
        case 4:
            break;
        default:
            printf("enter valid input");
            break;
        }
        }
    }
    else if(choice==3)
    {
        printf("search by\n1.index\n2.element");
        scanf("%d",&s);
        switch (s)
        {
        case 1:traverse();
            search_i();
            break;
        case 2:traverse();
            search_e();
            break;
        default:printf("enter the valid input");
            break;
        }
    }
    else if(choice==5)
    {
        traverse();
    }
    else if(choice==6)
    {
        return 0;
    }
    else if(choice==2)
    {system("cls");
        traverse();
        printf("enter the opt");//deletion
        printf("\n1.beg\n2.end\n3.pos");
        scanf("%d",&del);
        switch (del)
        {
        case 1://system("cls");
            del_beg();
            traverse();    
            break;
        case 2://system("cls");
            del_end();
            traverse();    
            break;
        case 3://system("cls");
            del_pos();
            traverse();    
            break;
        default:printf("enter the valid input");
            break;
        }
    }
    }
}