#include<stdio.h>
int main()
{
	int i;
	char str[20];
	printf("enter a str\n");
	scanf("%s",str);
	int count=0;
	for(i=0;str[i]!=0;i++)
	{
		count++;
	}
	printf("the length of str is %d\n",count);

}
