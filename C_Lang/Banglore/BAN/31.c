//Amstrong num or not?


#include<stdio.h>
int poww(int d,int c)
{
	int digits=0;
	int res=1,fin=0;
	int r,i;
	while(c)
	{
		res=1;
		r=c%10;
		c=c/10;

		for(i=0;i<d;i++)
		{
			res=res*r;
		}
		fin=fin+res;

	}
	return fin;
}

int dig(int c)
{
	int digits=0;

	while(c)
	{
		c=c/10;
		digits ++;
	}
	return digits;
}
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int dup=n;
	int x=dig(n);
	printf("the no of digits in a num is:%d\n",x);
	int a=poww(x,dup);
	if(a==dup)
		printf("amstrong number\n");
	else
		printf("not a amstring num\n");
}
