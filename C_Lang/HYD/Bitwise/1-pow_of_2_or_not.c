#include<stdio.h>
void pow(int n)
{
	int count=0;
	while(n!=0)
	{
		int num;
		if(n%2==1)
			count++;
		n=n/2;
	}
	if(count==1)
		printf("power of 2");
	else
		printf("not a power of 2");
}
int main()
{
	int n;
	printf("enter a num");
	scanf("%d",&n);
	pow(n);
}
