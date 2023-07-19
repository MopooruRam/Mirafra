#include<stdio.h>
int main()
{
	int n,z;
	printf("enter a hex num\n");
	scanf("%x",&n);
	printf("Before nibble wap:%x\n",n);
	z = ((n & 0xF0) >> 4) | ((n & 0x0F) << 4);

	printf("after nibble swap:%x\n",z);

	return 0;
}

