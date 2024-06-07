#include<stdio.h>
#include<conio.h>
int main()
{
    int n=0,index;
    int arr[10]={34,23,54,67,56,24,19,45};
    printf("your array is:");
    for(int i=0;i<10;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\nenter the index you want to delete:");
    scanf("%d",&index);
    while(arr[n]!=0)
    {
        arr[index]=arr[index+1];
        index++;
        n++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}