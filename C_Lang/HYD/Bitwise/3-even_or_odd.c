#include<stdio.h>
void evenorodd(int n)
{
	if(n&1==1)
		printf("odd number");
	else
		printf("even number");
}
int main()
{
	int n;
	printf("enter a num");
	scanf("%d",&n);
	evenorodd(n);
}

