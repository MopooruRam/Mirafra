//4-Reverse of an array ?


#include<stdio.h>
int reversearray(int a[],int n);
int main()
{
	int n=5;
	int a[n],i;
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	reversearray(a,n);
	printf("the reverse array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int reversearray(int a[],int n)
{
	int i,j,t=0;

	for(i=0,j=n-1; i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
}

