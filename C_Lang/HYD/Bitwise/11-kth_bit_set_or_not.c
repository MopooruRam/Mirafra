#include<stdio.h>
int main()
{
	int num,pos,res;
	printf("enter the num:\n");
	scanf("%d",&num);
	printf("enter the position\n");
	scanf("%d",&pos);
	res=num&(1<<pos);
	if(res==0)
		printf("the bit is not set");
	else
		printf("the bit is  set");
	return 0;
}

