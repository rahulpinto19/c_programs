#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,r=0;
    printf("enter the numbers upto where you want to print the prime numbers:");
    scanf("%d",&a);
    for(int b=2;b<=a;b++)
    {
        for(y c=1;c<b;c++)
        {
           if(b%2!=0)
           {
             if(b%c==0)
            {
                printf("%d\n",b);
            }
           }
        }
    }
}