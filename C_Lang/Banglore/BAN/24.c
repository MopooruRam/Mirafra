//Implementation Binary search//

#include<stdio.h>
void bin(int arr[],int n,int element)
{
	int i;
	int l=0,h=n-1;
	int mid;
//=(h+l)/2;

	while(l<=h)
	{
		mid=(h+l)/2;
		if(arr[mid]==element)
		{
			printf("element found at index position is:%d\n",mid);
			break;
		}
		else if(element>arr[mid])
		{
			l=mid+1;
		//	mid=h+l/2;
		}
		else
		{
			h=mid-1;
		//	mid=h+l/2;
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
	bin(arr,n,element);
	return 0;
}

