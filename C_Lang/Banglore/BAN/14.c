//Reverse the bits position in a number


#include<stdio.h>
int main()
{
	int x,i,r;
	printf("enter a num\n");
	scanf("%d",&x);
	for(i=0;i<32;i++)
	{
		if(x&1)
			printf("1");
		else
			printf("0");
	x=x>>1;
	}
	return 0;
}
