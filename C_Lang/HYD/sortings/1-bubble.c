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
	
	for(i=0;i<n-1;i++)
	{
		int flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}

		}
		if(flag==0)
			break;
	}
	int h=0;
	printf("after sorted the array is:");
	for(h=0;h<n;h++)
	{
		printf("%d",arr[h]);
	}
	printf("\n");
}
