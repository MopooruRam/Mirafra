//Swap the 7th & 8th bits position in a number


#include<stdio.h>
int main()
{
	int x,s,v;
	printf("enter a num\n");
	scanf("%d",&x);
	s=(0x01<<5)&1;
	v=(0x01<<3)&1;
	x=x^((s^v)<<5);
	x=x^((s^v)<<3);
	printf("%d",x);
	return 0;

}
