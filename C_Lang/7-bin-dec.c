#include<stdio.h>
int main()
{
    int arr[50],n,r,j,k,i=0,sum=0;
    printf("enter a nmber to convert it into binary:\n");
    scanf("%d",&n);
  /*  while(n!=0)
    {
        r=n%10;
        n=n/10;
        arr[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
	int k=0;
	if()
	sum=sum+2^i;
	i++;
    }*/
while(n>0){
k=n&(0x1<<0);
sum=sum+(k*2^i);
i++;
n>>=1;
}
printf("%d\n",sum);
    
}

