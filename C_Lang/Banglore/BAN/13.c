//c program to get parity corrected byte from the user input 


#include<stdio.h>
int main()
{
	int x;
	printf("enter a num\n");
	scanf("%d",&x);
	if(0x01&x)
		printf("the parity of %d is odd\n",x);
	else
		printf("the parity of %d is even\n",x);
	return 0;
}
