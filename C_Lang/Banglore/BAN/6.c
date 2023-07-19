/*Write a program using arrays, DMA, functions, pointers to take subjects and marks from an user and print the subjects and marks as below
I/P
Enter number of subjects - 3
Subject Name - Science
Subject Marks - 61
Subject Name - Maths
Subject Marks - 91
Subject Name - Social Studies
Subject Marks - 60
O/P
Science 61(Prime)
Maths 91(Prime)
Social Studies 60(Non Prime)
*/
#include<stdio.h>
int prime (int *ptr)
{
	int i;
	for (i = 2; i < *ptr; i++)
	{
		if ((*ptr % i) == 0)
		{
			return 1;
		}
	}
return 0;

}
int main ()
{
	
	int i, x = 0,y;
	printf ("enter the how many sub \n");
	scanf("%d",&y);
	int arr[y];
	for (i = 0; i < y; i++)
	{
		scanf ("%d", &arr[i]);
	}
	for (i = 0; i < y; i++)
	{
		x = prime (&arr[i]);
		if (x == 0)
		{
			printf ("%d:is prime\n", arr[i]);
		}
		else
		{
			printf("%d:non prime num\n",arr[i]);
		}
	}
}

