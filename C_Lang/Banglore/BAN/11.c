//11-convert LE  to BE

#include<stdio.h>
int main()
{
	int x;
	printf("enter a num");
	scanf("%x",&x);
	x=(x<<24) | (x>>24) | ((x>>8) & (0x0000ff00)) | ((x<<8) & (0x00ff0000));
	printf("%x",x);
	return 0;
}

