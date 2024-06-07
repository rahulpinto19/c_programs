#include<stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int i,j,mid;
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the elements");
        scanf("%d",&arr[n]);
    }
    int temp;
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(temp<=arr[j])
            {
                temp=arr[j];
                mid=j;
            }
        }
        swap(&arr[i],&arr[mid]);
    }
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
}