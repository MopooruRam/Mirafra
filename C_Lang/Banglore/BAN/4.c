/*Write a program to get maximum repeating element in an array */
#include<stdio.h>
int repeat(int arr[],int n)
{
	int i,j,c=0,mc=0;
	static int big=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=i+1;j<n-1;j++)
		{
			if(arr[i]==arr[j])
			{
				c++;
			}

			if(c>mc)
			{
					mc=c;
					big=arr[i];
			}

		}
	//	printf("big is %d\n",big);
	}

	return big;
}
int main()
{
	int n,m;
	int arr[5]={3,3,4,4,3};
	n=sizeof(arr);
	m=repeat(arr,n);
	printf("the max repeating element is %d",m);
	return 0;
}
