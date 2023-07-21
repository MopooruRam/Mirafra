//3-How to use static keyword and the importance of static keyword ?


#include<stdio.h>
int fun1()
{
	int num=0;
	num++;
	return num;
}

int fun()
{
	static int num=0;
	num++;
	return num;
}

int main()
{
	printf("with static%d\n",fun());
	printf("%d\n",fun());
	printf("%d\n",fun());
	printf("without static:%d\n",fun1());
	printf("%d\n",fun1());
	printf("%d\n",fun1());

}

