#include<stdio.h>
void pow(int n)
{
	if((n&(n-2))==0)
		printf("power of 4");
	else
		printf("not a powe");
}

int main()
{
	int n;
	printf("enter a num");
	scanf("%d",&n);
	pow(n);
}
