#include<stdio.h>
int main()
{
    int i,j;
    int k=10;
 //   scanf("%d",&k);
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            k=i;
            if(j<k)
            {
                printf("*");
            k--;
            }
        }
            printf("\n");
    }
}