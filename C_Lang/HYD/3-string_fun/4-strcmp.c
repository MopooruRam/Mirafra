#include<stdio.h>
int x;
int strrcmp(char str1[],char str2[])
{
	int i;
	for(i=0;str1[i]||str2[i]!=0;i++)
	{
		if(str1[i]>str2[i])
			return 1;
		else if(str1[i]<str2[i])
			return -1;
	}
}
int main()
{
	char str1[20];
	char str2[20];
	printf("\nenter 2 strings\n");
	scanf("%s %s",str1,str2);
	x=strrcmp(str1,str2);
	switch(x)
	{
		case 1:printf("string1 is bigger\n");break;
		case -1:printf("string2 is bigger\n");break;
		default:printf("Both strings are equal\n");

	}

}
