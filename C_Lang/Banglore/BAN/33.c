#include<stdio.h>
struct school
{
	int a;
	int c;
	char d;
	int b;

}school[2];
int main()
{
	int start=&school[0].a;
	int last=&school[1].a;
	printf("the size of structure is %d\n",last-start);
}
