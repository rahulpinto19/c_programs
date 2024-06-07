#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
struct node
{
    int data;
    struct node *link;
};
    struct node*head=NULL;
int reverse()
{
    struct node*prev=NULL;
    struct node*con=head;
    struct node*n=head->link;
    while(con!=NULL)
    {
        con->link=prev;
        prev=n;
        n=con;
        if(n->link!=NULL)
            n=n->link;
    }
    con->link=prev;
    head=con->link;
}
void beg()
{
    struct node*k=head;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter hte element");
    scanf("%d",&new->data);
    new->link=head;
    head=new;
}
void end()
{
    struct node*k=head;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter hte element");
    scanf("%d",&new->data);
    while(k->link!=NULL)
    {
        k=k->link;
    }
    k->link=new;
    new->link=NULL;
    
}
void pos()
{
    int p;
    struct node*k=head;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter hte pos you want to insert:");
    scanf("%d",&p);
    printf("enter the element:");
    scanf("%d",&new->data);
    for(int i=1;i<p-1;i++)
    {
        k=k->link;
        printf("%d",k->data);
    }
    new->link=k->link;
    k->link=new;
}
void del_beg()
{
    struct node*k=head;
    head=k->link;
    free(k);//this erase the node which has been deleted
}
void del_end()
{
    struct node*k=head;
    struct node*temp;
    int i=1;
    while(k->link!=NULL)
    {
        temp=k;
        k=k->link;
    }
    free(k);
    temp->link=NULL;
}
void del_pos()
{
    struct node*k=head,*temp=NULL;
    int p,i=1;
    printf("enter the pos to be deleted:");
    scanf("%d",&p);
    if(p==1){
    	head=head->link;
	}else{
		for(i;i<p;i++)
		    {
		        temp=k;
		        k=k->link;
		    }
		    temp->link=k->link;
		    k->link=NULL;
	}
}

void search_i()
{////system("cls");
    struct node*k=head;
    int index,i=1;
    printf("enter the index");
    scanf("%d",&index);
    for(i;i<index;i++)
    {
        k=k->link;
    }
    printf("%d",k->data);
}
void search_e()
{
    struct node*k=head;
    int element,pos=1;
    printf("enter the element");
    scanf("%d",&element);
    while(k!=NULL)
    {////system("cls");
        k=k->link;
        pos++;
        if(element==k->data)
        {
            printf("at %d  position\n",pos);
            break;
        }
        else
        {
            printf("not in the list");
        }

    }
}
void traverse()
{
    int i=1;
    struct node*k=head;
    while(k!=NULL)
    {
        printf("%d)%d  ",i,k->data);
        k=k->link;
        i++;
    }
}
int main()
{
    int choice,n=1,m=1,search;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&new->data);
    head=new;
    new->link=NULL;
    m:
    ////system("cls");
    printf("\nchoose the option\n");
    printf("1.insertion \n2.deletion\n3.searching\n4.exit:\n5.reverse");
    scanf("%d",&choice);
    if(choice==5)
    {
        reverse();
        traverse();
    }
    if(choice==1)
    {
        while(n!=4)
    {
        printf("\nenter the option\n");
        printf("1.beg\n2.end\n3.jpos\n4.exit\n");
        scanf("%d",&n);
        ////system("cls");
        switch (n)
        {
        case 1:beg();
            ////system("cls");
            traverse();
            break;
        case 2:end();
        //system("cls");
            traverse();
            break;
        case 3:pos();
        //system("cls");
            traverse();
            break;
        case 4:n=4;
                break;
        default:
            printf("enter valid input");
            break;
        }
    }
    }
    else if(choice==2)
    {
        while(m!=4)
        {
        
        printf("choose the option:");
        //traverse();
        printf("\n1.deletion at beg\n2.at end \n3.at pos\n4.exit");
        scanf("%d",&m);
        switch (m)
        {
        case 1:del_beg();
            //system("cls");
                traverse();
            break;
        case 2:del_end();
            ////system("cls");
                traverse();
            break;
        case 3:del_pos();
            ////system("cls");
                traverse();
            break;
        case 4:break;
        default:
            printf("enter valid input");
            break;
        }
        }
    }
    else if(choice==3)
    {
        while(search!=3)
    {
        printf("search by \n1.Index\n2.element");
        scanf("%d",&search);
        switch(search)
        {
        case 1:
            ////system("cls");
            traverse();
            search_i();

            break;
        case 2:
        ////system("cls");
            traverse();
            search_e();
            break;
        case 3:
            return 0;
        default:
            printf("\n give valid input");
            break;
        }
    }
    }
        
    else if(choice ==4)
    {
        return 0;
    }
    else
    {printf("enter the valid input\n");}
    goto m;
}