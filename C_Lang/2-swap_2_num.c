#include<stdio.h>
int x,y;
void bit(int x,int y)
{
	x=x^y;
	y=y^x;
	x=x^y;
	printf("after swapping using Bitwise:x=%d y=%d\n",x,y);
}
int main()
{
	printf("enter x and y values\n");
	scanf("%d %d",&x,&y);

	printf("before swapping:x=%d y=%d\n",x,y);
	bit(x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swapping:x=%d y=%d\n",x,y);

}

