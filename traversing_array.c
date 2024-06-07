#include<stdio.h>
#include<conio.h>
int main()
{   
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your stored array is");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}