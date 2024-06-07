#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int n=3;
    int s=0,e=0;
    int i;
    for(s=0;s<n;s++)
    {
        for(e=0;e<n;e++)
        {
            for(i=s;i<=e;i++)
            {
                printf("%d",a[i]);
            }
            printf("\n");
        }
    }
}