#include<stdio.h>
#include<conio.h>
int main()
{
    int n,c=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("prime:");
    }
    else
    {
        printf("not a primie:");
    }   
}