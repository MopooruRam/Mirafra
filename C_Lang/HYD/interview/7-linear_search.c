#include<stdio.h>
int linear(int arr[],int n,int e)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==e)
		{
			return i;
		}
	}
}


int main()
{
	int i=0,e;

	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("enrter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter which element want to search\n");
	scanf("%d",&e);
	i=linear(arr,n,e);
	printf("the element found at %d index\n",i);
}
