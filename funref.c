#include <stdio.h>

void modifyValue(int *a)
{ 
    printf("Address of pointer a = %d\n", &a); // 6422256
    *a = 15;
}

int testFunction()
{
    int x = 10;
    printf("Call by reference:\n");
    printf("testFunction: Before modify functin x = %d\n", x); // 10

    printf("Address of x %d\n", &x);                           // 6422284
    modifyValue(&x);
    printf("testFunction: After modify functin x = %d\n", x); // 15

    return 0;
}