#include <stdio.h>
#define N 5
void sorrt(int mer[])
{
    int i,j;
 	for(i=0;i<10-1;i++)
	{
		int flag=0;
		for(j=0;j<10-1-i;j++)
		{
			if(mer[j]>mer[j+1])
			{
				int temp=mer[j];
				mer[j]=mer[j+1];
				mer[j+1]=temp;
				flag=1;
			}

		}
		if(flag==0)
			break;
	}

    printf("\nafter sorted the array is:");
     for(i=0;i<(N+N);i++)
    {
    printf("%d ",mer[i]);
    }
}
int main()
{
    int ar[N]={1,13,15,7,19};
    int arr[N]={2,4,16,8,10};
    int mer[N+N];int i,j=0;
    for(i=0;i<(N+N);i++)
    {
        if(i<5)
        mer[i]=ar[i];
        else if(i>=5)
        {   
            mer[i]=arr[j];
            j++;
        }
    }

    printf("before sorted the array is:");
    for(i=0;i<(N+N);i++)
    {
    printf("%d ",mer[i]);
    }
sorrt(mer);
    
}

