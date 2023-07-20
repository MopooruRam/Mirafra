//What is the difference
//- char *p = "hello"
//- char s[] = "hello"
#include <stdio.h>

int main()
{

	char *p="Hello";
	char s[]="Hello";
	printf("p:%p p+1:%p p+2:%p\n s:%p s[1]:%p s[2]:%p s[4]:%p\n",p,p+1,p+2,s,&s[0],&s[1],&s[2],&s[4]);
	return 0;
}
