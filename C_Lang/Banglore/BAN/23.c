//Implementation of Linear search//

#include<stdio.h>
void lin(int arr[],int n,int element)
{
int i;
	for(i=0;i<5;i++)
	{
		if(arr[i]==element)
		{
			printf("element found at index position is:%d\n",i);
		}
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int n=5;
	int i,element;
	printf("enter the element to find the element in array\n");
	scanf("%d",&element);
	lin(arr,n,element);
	return 0;
}
