#include <stdio.h>


    union test{ 
//int a; 
//int b; 
char c; 
float f; 
};

union test tes;
int main()
{
printf("%d",sizeof(tes));

    return 0;
}

