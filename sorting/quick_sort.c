#include<stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int *a,int k,int j)
{
    int x=a[j];
    int i=(k-1);
    int z;
    for(z=k;z<=j-1;z++)
    {
        if(x>=a[z])
        {
            i++;
            swap(&a[i],&a[z]);
        }
    }
    swap(&a[i+1],&a[j]);
    return i+1;
}
int quicksort(int *arr,int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}
int main()
{
    int n,i;
    printf("enter the size of the array");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        printf("enter the elements");
        scanf("%d",&array[i]);
    }
    //int array[4]={34,234,66,2};
    for(i=0;i<n;i++)
    printf("%d ",array[i]);
    quicksort(array,0,n-1);
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d ",array[i]);
}