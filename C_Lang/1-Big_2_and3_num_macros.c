#include<stdio.h>
#define x 8
#define y 4
#define z 9
int main()
{

	//Biggest of 2 numbers



	// Using Ternery operator
	printf("the biggest of 2 num:%d\t\t",x>y?x:y);

	// Using if-else
	if(x>y)
		printf("The biggest num:%d\n",x);
	else
		printf("the biggest num:%d\n",y);

	//Biggest of 3 numbers


	//Using ternery opearator
	printf("\nThe biggest of 3 num:%d\t\t",(x>y>z?x:(y>z?y:z)));


	//using if_else
	if(x>y&&x>z)
		printf("the biggest num is%d\n",x);
	else if(y>x&&y>z)
		printf("the biggest num is%d\n",y);
	else
		printf("the biggest num is%d\n",z);

}




