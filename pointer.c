#include <stdio.h>
int testPointer()
{
    int x = 10;                                    // Normal variable declaration and initialization
    int *ptr;                                      // Pointer declaration
    printf("Value of variable x = %d\n", x);       // 10
    printf("Address of variable x = %d\n", &x);    // 6422284
    ptr = &x;                                      // Pointer initialization value with address of x
    printf("Address of pointer ptr = %d\n", ptr);  // 6422284
    printf("Address of pointer ptr = %d\n", &ptr); // 6422280
    printf("Value of x = %d\n", *ptr);             // 10
    *ptr = 20;                                     // Change value of x
    printf("Value of x = %d\n", *ptr);             // 20 Updated value of x

    return 0;
}