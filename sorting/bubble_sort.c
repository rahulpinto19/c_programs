#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter the size of hte array");
	scanf("%d",&n);
	int arr[n];
	int i=0;
	for(i;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&arr[i]);
	}
	int temp,j;
	for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
				printf("\n");
	for(i=0;i<n;i++)
	for(j=0;j<n-1;j++)
	{
		if(arr[j]<=arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		}
	}

}