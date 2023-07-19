#include <stdio.h>
void swaap(int *p,int *q)
{
	int *t=0;
	*t=*p;
	*p=*q;
	*q=*t;
	printf("x=%d  y=%d  \n",*p,*q);

}
int main()
{
	int x=5,y=6;
	swaap(&x,&y);


	return 0;
}
