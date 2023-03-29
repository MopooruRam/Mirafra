 #include<stdio.h>
void strnncat(char str1[],char str2[],int n)
{
int i,j;
 for(i=0;str1[i]!=0;i++);
 for(j=0;j<n;j++,i++)
 {
         str1[i]=str2[j];
 }
 //str1[i]=0;
 printf("the strcat is:%s\n",str1);


}
 int main()
 {
         int n;
         char str1[20];
         char str2[20];
	printf("enter the 2 strings");
	scanf("%s %s",str1,str2);
	printf("enter the n");
	scanf("%d",&n);	
         strnncat(str1,str2,n);
     
 }
                                                  

