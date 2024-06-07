#include<stdio.h>
#include<conio.h>
int factor(int a,int b)
{   int x=1,y=1,z=1,i;
    for(i=1;i<=a;i++)x*=i;
    for(i=1;i<=b;i++)y*=i;
    for(i=1;i<=a-b;i++)z*=i;
    return x/(y*z);
}
int main()
{
    int coef,i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        printf(" ");
        for(k=0;k<=i;k++)
        {
            if(k==0||k==i)coef=1;
            coef=factor(i,k);
            printf(" %d",coef);
        }
        printf("\n");
    }
}