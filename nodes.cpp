#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
 int data;
 node*link;
};
void create();
int main()
{
create();
}
void create()
{
    struct node*head;
    struct node*ptr;
    struct node*ptr2;
    ptr=(struct node*)malloc(sizeof(struct node));
    head=ptr;
    ptr->data=40;
    ptr->link=ptr2;
    ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2->data=30;
    ptr2->link=NULL;
    cout<<ptr->data;
    cout<<ptr->link;

}
