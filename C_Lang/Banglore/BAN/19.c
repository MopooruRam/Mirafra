//19-factorial program using recursion ?

#include<stdio.h>
int fact(int n)
{
	int f=1,i;
	if(n==0)
	{
		return f;
	}
	f=n*(fact(n-1));

}
int main()
{
	int x;
	int n=5;
	x=fact(n);
	printf("%d",x);
}
