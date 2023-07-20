//1.Separate even and odd numbers in the integer array?


#include <stdio.h>

int main()
{
	int n=5;
	int arr[5]={1,2,3,4,5};
	int even[n];
	int odd[n];
	int i,j,k;
	for(i=0;i<n;i++)
	{
		if((arr[i]%2)==0)
		{

			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	printf("the odd num is: ");
	for(i=0;i<k;i++)
	{
		printf("%d",odd[i]);
	}
	printf("\nthe even num is: ");
	for(i=0;i<j;i++)
	{
		printf("%d",even[i]);
	}


	return 0;
}



