#include<stdio.h>
int main()
{
	int num,pos;
	printf("\nenter a num");
	scanf("%d",&num);
	printf("\nenter the position\n");
	scanf("%d",&pos);
	num=num|1<<pos;
	printf("\nafter set the bit the value is %d\n",num);
}
