
void del_pos()
{
    struct node*k=head;
    int p,i=1;
    struct node*temp;
    printf("enter the pos to be deleted:");
    scanf("%d",&p);
    for(i;i<p-1;i++)
    {
        temp=k;
        k=k->link;
    }
    temp->link=k->link;
    k->link=NULL;
}
