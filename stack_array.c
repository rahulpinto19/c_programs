#include<stdio.h>
int top=-1;
int insert(int *arr,int n)
{
    if(top<n)
    {
        top++;
        printf("%d",top);
        printf("enter the element");
        scanf("%d",&arr[top]);
    }
    else
    {
        printf("stack is full\n");
    }
}
int show(int *arr)
{
    int i=top;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    for(top;top>=0;top--)
    {
        printf(" %d\n",arr[top]);
    }
}
int show_top(int *arr)
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    printf("%d",arr[top]);
}
int Delete(int *arr)
{
    top--;
}
int main()
{
    int n,opt;
    printf("enter the size of the stack");
    scanf("%d",&n);
    int stack[n];
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Show top\n4.show all\n5.Exit\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:insert(stack,n);
                    //show_top(stack);
                    break;
            case 2:Delete(stack);
                    //show_top(stack);
                    break;
            case 3:show_top(stack);
                    break;
            case 4:show(stack);
                    break;
            case 5:return 0;
            default:printf("enter valid input\n");
                    break;
                
        }
    }
}