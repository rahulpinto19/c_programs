#include<stdio.h>
#include<conio.h>
void element();
void element(mid)
{
     mid=mid+1;
    printf("the position of the element is %d",mid);

}
int main()
{
  int n,i=0,j=9,mid;
  //i is the index of the array at starting 
  //j is the index of the array at ending 
  int arr[10]={19,23,24,34,45,54,56,67,75,78};
  printf("enter the element you want to search:");
  scanf("%d",&n);
  while(1)
  {
    mid=(i+j)/2;
    if(n==arr[mid])
    {
      element(mid);
        return 0;
    }
    else if(n<arr[mid])
    {
      j=mid-1;
    }
    else if(n>arr[mid])
    {
      i=mid+1;
    }
  }
}