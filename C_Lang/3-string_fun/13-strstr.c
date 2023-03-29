#include<stdio.h>
int x,y;
int sttrchr(char str1[],char ch)
{
	int i=-1;
	for(i=0;str1[i]!=0;i++)
	{
		if(str1[i]==ch)
		{
			y=i;
		}
	
	}
	if(y>0)
	return y;
	else
	return -1;
}
int main()
{
	char str1[20];
	char ch;
	printf("\n enter  string and char\n");
	scanf("%s %c",str1,&ch);
	x=sttrchr(str1,ch);
	if(x==-1)
		printf("char is not found");
	else	
		printf("the char is found at the %d index position\n",x);
}


