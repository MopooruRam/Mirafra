#include<stdio.h>
/*int fun()
{
int num=0;
num++;
return num;
}
*/
int fun()
{
static int num=0;
num++;
return num;
}

int main()
{
printf("%d\n",fun());
printf("%d\n",fun());
printf("%d\n",fun());
}
