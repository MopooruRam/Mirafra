#include<stdio.h>
int main()
{
	char c;
	int i,j;
	int arr1[2][3];
	int arr[2][3];
	int arr2[3][3];
	int arr3[3][3];
	printf("want to perform 2x3 matrix addition and multiplication? y/n\n");
	scanf("%c",&c);
	if(c=='y')
	{
		printf("enter the 1st matrix \n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		printf("enter the 2nd matrix\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&arr1[i][j]);
			}
		}
		printf("the addition of 2x3 matrix is\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",arr[i][j]+arr1[i][j]);
			}
			printf("\n");
		}
		printf("the multiplication of 2x3 matrix is\n");
		for(i=0;i<2;i++)
		{       
			for(j=0;j<3;j++)
			{       
				printf("%d\t",arr[i][j]*arr1[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("enter the 1st matrix \n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		printf("enter the 2nd matrix\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&arr1[i][j]);
			}
		}
		printf("the addition of 2x3 matrix is\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",arr[i][j]+arr1[i][j]);
			}
			printf("\n");
		}
		printf("the multiplication of 2x3 matrix is\n");
		for(i=0;i<3;i++)
		{       
			for(j=0;j<3;j++)
			{       
				printf("%d\t",arr[i][j]*arr1[i][j]);
			}
			printf("\n");
		}

	}

}
