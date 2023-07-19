
#include<stdio.h>
void strrcpy(char str[])
{
	int i;
	char str2[20];
	for(i=0;str[i]!=0;i++)
	{
		str2[i]=str[i];
	}
	printf("after copying a string is %s",str2);
}


int main()
{
	char str[20]="masters";
	strrcpy(str);
}
