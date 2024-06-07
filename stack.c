#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int stack[10], n = 10;
int place=-1;
int k;
void push()
{
    place++;
    if(place==n-1)
    {
        printf("the stack is full");
    }
    else
    {
        printf("enter the element");
        scanf("%d",&stack[place]);
    }
}
void pop()
{
    if(place==-1)
    {
        printf("stack is empty");
    }
    else if(place==0)
    {
        printf("stack is cleared");
    }
    else
    place--;
}
void top()
{
    printf("%d",stack[place]);
}
void show()
{
    int p=place;
    int z=0;
    if(p==-1)
    {
        printf("no elements:");
    }
    else
    {for(p;p>=0;p--)
    {
        z++;
        printf("%d)%d\n",z,stack[p]);
    }}
}
int main()
{
    while(1)
    {
    printf("enter the option");
    printf("\n1.insert\n2.delete\n3.top value\n4.show\n5.exit:");
    scanf("%d",&k);
    switch (k)
    {
    case 1:push();
        show();
        break;
    case 2:pop();
        show();
        break;
    case 3:top();
        break;
    case 4:show();
        break;
    case 5:exit(0);
        break;
    default:
        printf("enter the valid input");
        break;
    }
    }
}