#include<stdio.h>
int main()
{
	int x=12;
	printf("before:%d",x);
	x=(x&0xf0)>>4 | (x&0x0f)<<4;
	printf("after swapping %d",x);
}
