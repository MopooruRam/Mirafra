#include<stdio.h>
int main()
{
    int arr[50],n,r,j,i=0;
    printf("enter a nmber to convert it into binary:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        arr[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    
}

