#include<stdio.h>
int main()
{
	int n=0x12345678,z;
//	printf("enter a hex num\n");
//	scanf("%x",&n);
	printf("Before nibble wap:%x\n",n);
	z = (((n & 0xFF000000) >> 24) | ((n & 0x000000FF) << 24) | ((n & 0x00FF0000) >> 8) | ((n & 0x0000FF00) << 8));

	printf("after nibble swap:%x\n",z);

	return 0;
}

