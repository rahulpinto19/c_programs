#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct node
{
    struct node*left,*right;
    int data;
};
int i=0;
struct node*create()
{
    int d;
    struct node*new=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data");
    scanf("%d",&d);
    if(d==-1)
    {
        return 0;
    }
    new->data=d;
    printf("enter to the left of %d ",new->data);
    new->left=create();
    printf("enter right child of %d",new->data);
    new->right=create();
}
void inorder(struct node* node)
{
    if (node == NULL)
        return;
     inorder(node->left);
    printf("%d ",node->data);
     inorder(node->right);
}
void preorder(struct node* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preorder(node->left);
    preorder(node->right);
}
void Postorder(struct node* node)
{
    if (node == NULL)
        return;
    Postorder(node->left);
    Postorder(node->right);
   printf("%d ", node->data);
}
void search(struct node* node,int val)
{
    if(node==NULL)
    return;
    if(node->data==val)
    {
        printf("found data");   
    }
    search(node->left,val);
    search(node->right,val);
}
void main()
{
    int i,del,val;
    struct node*root;
    root=create();
    //system("cls");
    int opt;
    while(1)
    {printf("show the elements through \n1.Inorder\n2.Preorder\n3.Postorder\n4.Search\n5.Exit");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:inorder(root);
    break;
    case 2:preorder(root);
    break;
    case 3:Postorder(root);
        break;
    case 4:
        printf("Enter the element to be searched");
        scanf("%d",&val);
        search(root,val);
        break;
    case 5:return;
    default: printf("enter the valid input");
        break;
    }}
}