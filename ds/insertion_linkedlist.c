#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
struct node
{
    int data;
    struct node*link;
};
    struct node*head=NULL;//this is the global variable declaration
void insert_beg()
{
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&new->data);
    new->link=head;
    head=new;
}
void insert_pos(struct node*k)
{
    int n;
    struct node*temp;
    printf("enter the position want to enter:");
    scanf("%d",&n);
    for(int i=1;i<n-1;i++)
    {
        k=k->link;
    }
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&new->data);
    temp=k->link;
    k->link=new;
    new->link=temp;
    
}
void insert_end(struct node*k)
{
    while(k->link!=NULL)
    {k=k->link;}
    printf("enter the element:");
    struct node*new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    k->link=new;
    new->link=NULL;

}
void traverse()
{
    int j=1;
    struct node *k=head;
    while(k!=NULL)
    {
        printf("%d) %d ",j,k->data);
        k=k->link;
        j++;
    }
}
int main()
{
    int choice;
    
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    head=ptr;
    system("cls");
    while(choice<10)
    {
        printf("\n1.insert at beg \n2.insert at pos \n3.insert at end \n4.show linked list \n5.exit\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:insert_beg();
            traverse();
        break;
    
    case 2: insert_pos(head);
            traverse();
            break;
    case 3: insert_end(head);
            traverse();
            break;
    case 4: traverse();
            break;
    case 5: exit(0);
            
    case 6: printf("enter the valid input:");
    default:
        printf("give the valid input");
    printf("\n");
    }   
    }
}