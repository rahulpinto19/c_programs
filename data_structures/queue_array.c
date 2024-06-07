#include<stdio.h>
#include<conio.h>
    int front=-1;
    int rear=-1;
void insertion(int *arr,int n)
{
    if(n>=1 && front==-1&&rear==-1)
    {
        front++;
        rear++;
        printf("enter the element");
        scanf("%d",&arr[front]);
        
    }
    else if(rear>=n-1)
    {
        printf("queue is full");
    }
    else
    {
        rear++;
        printf("enter the element");
        scanf("%d",&arr[rear]);
    }
}
void deletion()
{
    if(front<=rear)
    front++;
    else
    printf("queue is empty");
}
void show(int *arr)
{
    int i=front;
    for(i;i<=rear;i++)
    printf("%d ",arr[i]);
}
int main()
{
    int n,opt;
    printf("enter the size of the array");
    scanf("%d",&n);
    int queue[n];
    while(1)
    {
    printf("1.Insertion\n2.Deletion\n3.show\n4.exit");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:insertion(queue,n);
            show(queue);
            break;
        case 2:deletion();
            show(queue);
            break;
        case 3:show(queue);
            break;
        case 4:return 0;
            break;
        default:printf("enter valid input");
    }
    }
}