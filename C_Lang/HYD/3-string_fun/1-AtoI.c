#include<stdio.h>
int isnumeric(char str[])
{
	int i,c=0;
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>='0'&&str[i]<='9')
			c++;
	}
	if(c==i)
		return 1;
	else
		return 0;
}

int aatoi(char str[])
{
	int num=0,n,i;
	n=isnumeric(str);
	if(n==1)
	{
		for(i=0;str[i]!=0;i++)
		{
			str[i]=str[i]-48;
			num=num*10+str[i];
		}
	}
	return num;
}
int main()
{
	int x;
	char str[20];
	printf("enter a string\n");
	scanf("%s",str);
	x=aatoi(str);
	printf("the conversion of char to num:%d\n",x);
}
