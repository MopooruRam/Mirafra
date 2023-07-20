//palindrome num or not?

#include <stdio.h>
int palin(int x)
{
	int r,rev=0;
	while(x)
	{
		int r=0;
		r=x%10;
		x=x/10;
		rev=(rev*10)+r;
	}
	return rev;    
}
int main()
{
	int x;
	printf("enter a num\n");
	scanf("%d",&x);
	int ret=0;
	ret=palin(x);
	if(ret==x)
		printf("palindrome\n");
	else
		printf("not a palindrome\n");

	return 0;
}

