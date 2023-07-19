#include<stdio.h>
void strrev(char str[])
{
	int i,j;
	for(i=0;str[i]!=0;i++);
	for(j=0,i=i-1;j<i;j++,i--)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}
int main()
{
	char str[]="masters";
	printf("before reverse a string is %s\n",str);
	strrev(str);
	printf("after reversing %s",str);
}
