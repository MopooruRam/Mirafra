/*#include<stdio.h>
void revv(int n)
{
int arr[50],i,j,r;
 printf("\nReverse of a binary num:");
 while(n!=0)
 {
         r=n%2;
         n=n/2;
         printf("%d",r);
         arr[i]=r;
         i++;
 }
 printf("\n\nnormal binary num:");

 for(j=i-1;j>=0;j--)
 {
         printf("%d",arr[j]);
 }

}
int main()
{
	int n;
	printf("enter a nmber to convert it into binary:\n");
	scanf("%d",&n);
	revv(n);
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int arr[50],n,r,j,i=0;
	printf("enter a nmber to convert it into binary:\n");
	scanf("%d",&n);
	printf("\nReverse of Binary num:");
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		printf("%d",r);
		arr[i]=r;
		i++;
	}
	printf("\nNormal binary num:");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}

}

