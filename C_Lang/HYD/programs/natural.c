#include<stdio.h>
int num(int n)
{
	if(n==0)
	{
		return -1;
	}
	num(n-1);
	printf("%d",n);

}
int main()
{
	int n,i,p;
	printf("enter a number\n");
	scanf("%d",&n);
	p=num(n);
	if(p==-1)
		printf("  ");
}
