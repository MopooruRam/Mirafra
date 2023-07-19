#include <stdio.h>
int dup(int a[],int n);
int main() {
	int n;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int a[n],i;

	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	dup(a,n);
	return 0;
}
int dup(int a[],int n)
{
	int i,j,count=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}

		}
		if(count>=1)
			printf("the duplicate element is:%d\n",a[i]);
	}
}
