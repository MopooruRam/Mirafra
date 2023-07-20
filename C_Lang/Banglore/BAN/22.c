//Write a program to demonstrate to pointer to pointer

#include <stdio.h>

int main()
{
    int x=5;
    int *p=&x;
    printf("accessing a value of x using single pointer:%d\n",*p);
    int **p1=&p;
   printf("accessing a value of x using double pointer:%d\n",**p1);
    return 0;
}

