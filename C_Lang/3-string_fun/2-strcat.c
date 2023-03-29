#include<stdio.h>
int main()
{
	int i=0,j=0;
	char str1[]="Rama";
	char str2[]="chandra";
	for(i=0;str1[i]!=0;i++);
	for(j=0;str2[j]!=0;j++,i++)
	{
		str1[i]=str2[j];
	}
	str1[i]=0;
	printf("the strcat is:%s\n",str1);
}
