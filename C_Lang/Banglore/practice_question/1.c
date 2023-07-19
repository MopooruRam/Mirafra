/*What happens when array is passed as a pointer in a function. Print the array from the function.*/


#include<stdio.h>
void fun(int **p)
{
	for(;**p;*p++)
	{
		printf("%d\n",**p);
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	for(;*p;p++)
	{
		printf("%d\n",*p);
	}

	fun(p);
	return 0;
}
