#include<stdio.h>
int main()
{
	int n=5;
	int arr[n];

	int i;
	printf("enter the array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int pos;
	int e;
	printf("enter the at which position you want to change\n");
	scanf("%d",&pos);
	printf("enter the value to change \n");
	scanf("%d",&e);
	for(i=0;i<5;i++)
	{
		if(arr[i]==pos)
		{
			arr[i]=e;
		}
	}
	printf("after replacing a value array is \n");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
}
