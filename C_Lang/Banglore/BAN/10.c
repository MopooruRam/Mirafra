//How to set/unset 4 and 6 bit of a given number?

#include<stdio.h>
int main()
{
	int x;
	printf("enter the a number\n");
	scanf("%d",&x);
	printf("after setting a 4th bit:%d\n",(1<<4)|x);
	printf("after setting a 6th bit:%d\n",(1<<6)|x);
	printf("after clearing a 4th bit:%d\n",(~(1<<4)&x));
	printf("after clearing a 6th bit:%d\n",((~(1<<6))&x));
}
