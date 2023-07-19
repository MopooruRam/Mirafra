#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter the num:\n");
	scanf("%d",&num);
	printf("enter the position\n");
	scanf("%d",&pos);
	num=num&(~(1<<pos));
	printf("\nafter clearing the bit the value is:%d\n",num);
	return 0;
}
