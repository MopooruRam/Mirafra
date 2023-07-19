//count the no of ones in a numbers

#include<stdio.h>
int main()
{
	int x,i,r=0,y,c;
	printf("enter a num\n");
	scanf("%x",&x);
	y=x;
	for(i=0;i<32;i++)
	{
		if(y&1)
		{
			r++;
		}		
		y=y>>1;
	}
	printf("the no of 1s are:%d\n",r);
	return 0;
}



