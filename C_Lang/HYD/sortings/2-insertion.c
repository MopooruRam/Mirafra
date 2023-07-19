#include<stdio.h>
int main()
{
	int n,i,j;
	int arr[n];
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	int k=0;
	for(k=0;k<n;k++)
	{
		scanf("%d",&arr[k]);
	}

	for(i=1;i<n;i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	int h=0;
	printf("after sorted the array is:");
	for(h=0;h<n;h++)
	{
		printf("%d",arr[h]);
	}
	printf("\n");
}

