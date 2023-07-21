//convert Decimal to Binary

#include<stdio.h>
void bin(int n)
{
	while(n)
	{
		if(0x01&n)
			printf("1");
		else
			printf("0");
		n=n>>1;
	}
}
int main()
{
	int n;
	printf("enter a num\n");
	scanf("%d",&n);
	bin(n);
}
