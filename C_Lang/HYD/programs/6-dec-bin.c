#include<stdio.h>
int main()
{
	int dec,i,rem,res=0;
	printf("enter a decimal num");
	scanf("%d",&dec);

	for(i=31;i>=0;i--)
	{
		rem=dec>>i;
		if(rem&1==1)
			printf("1");
		else
			printf("0");


	}
}
