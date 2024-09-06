#include <stdio.h>

int testPointer3()
{
    int var = 10;           // Actual variable
    int *intptr = &var;     //* = Dereference operator
    int **ptrptr = &intptr; //& = Address of operator

    printf("var: %d \nAddress of var: %d\n", var, &var);            // 10,6422280
    printf("intptr: %d\nAddress of intptr: %d\n", intptr, &intptr); // var 6422280,6422276
    printf("var: %d\nValue at intptr: %d\n", var, *intptr);         // var 10,10
    printf("ptrtoptr: %d\nAddress of ptrtoptr: %d\n", ptrptr, &ptrptr); // address 6422280,6422276
}