/*What will happen if you try to access a value which is out of array boundary*/


#include<stdio.h>
int main()
{
	int arr[4]={1,2,3,4};
	arr[8]=5;
	printf("%d\t",arr[8]);
}
