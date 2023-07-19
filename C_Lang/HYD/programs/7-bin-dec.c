#include<stdio.h>
int main()
{
	int bin,dec=0,i=0;
	printf("enter a binary num\n");
	scanf("%d",&bin);
	int num=bin;
	while(num!=0)
	{
		int digit=num%10;
		dec=dec+(digit<<i);
		num=num/10;
		i++;
	}
	printf(" the decimal equivalent is:%d\n",dec);
}
