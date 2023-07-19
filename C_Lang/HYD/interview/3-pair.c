#include <stdio.h>
int pair(int n,int a[],int t);
int main() {
	int n,t=10;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	pair(n,a,t);
	return 0;
}
int pair(int n,int a[],int t)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(t==a[i]+a[j])
			{
				printf("pair(%d %d)\n",a[i],a[j]);
			}
		}
	}
}
