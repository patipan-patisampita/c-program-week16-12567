#include <stdio.h>
int testPointer2()
{
    int x = 10; // actual(normal) variable declaration
    float y = 1.3f;
    char z = 'p';

    // Pointer declaration and initialization
    int *ptr_x = &x; // Pointer declaration
    float *ptr_y = &y;
    char *ptr_z = &z;

    // Printing the value
    printf("Value of x = %d\n", *ptr_x);   // 10
    printf("Value of y = %.2f\n", *ptr_y); // 1.3
    printf("Value of z = %c\n", *ptr_z);   // p

    // Printing the size of pointer variable
    printf("Size of integer pointer : %lu\n", sizeof(ptr_x)); //
    printf("Size of float pointer : %lu\n", sizeof(ptr_y));   //
    printf("Size of char pointer : %lu\n", sizeof(ptr_z));    //

    return 0;
}