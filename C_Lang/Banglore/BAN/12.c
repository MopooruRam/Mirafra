//How to ascertain if the machine is little or big endian?

/*#include<stdio.h>
int main()
{
	int x;
	printf("enter a num\n");
	scanf("%x",&x);
	if(x&0x01)
		printf("Little endian\n");
	else
		printf("Big endian\n");
}

*/

#include <stdio.h>
  
int main(void)
{
    int value = 0x1;
    char *r = (char *) &value;
 
    if (*r == 1) 
        printf("Your system is Little Endian\n");
    else
        printf("Your system is Big Endian\n");
    return 0;
}
