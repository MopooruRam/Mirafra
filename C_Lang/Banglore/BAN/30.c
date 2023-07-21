#include<stdio.h>
void pow(int n)
{
	int count=0;
	while(n)
	{
		if(0x01&n)
		{
			count ++;
		}
		if(count>1)
		{
			printf("not a power of 2\n");
			break;
		}
		n=n>>1;
	}
	if(count==1)
	{
		printf("its a power of 2\n");
	}
}
int main()
{
	int x;
	printf("enter a num\n");
	scanf("%d",&x);
	pow(x);
	return 0;
}
