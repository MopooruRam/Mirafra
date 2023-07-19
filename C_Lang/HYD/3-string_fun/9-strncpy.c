#include<stdio.h>
int x;
int strrcpy(char str1[],char str2[],int n)
{
        int i;
        for(i=0;i<n;i++)
        {
               str2[i]=str1[i];
        }
	str2[i]=0;
}
int main()
{
        char str1[20];
        char str2[20];
	int n;
        printf("\nenter 1 strings\n");
        scanf("%s",str1);
	printf("enter how many char want to compare");
	scanf("%d",&n);
        strrcpy(str1,str2,n);
     	printf("after copying a str1:\t%s\t into the str2:\t%s\n",str1,str2);

}

