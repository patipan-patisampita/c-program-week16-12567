#include <stdio.h>
void modifyValue(int a){
    a = 15;
}

int testFunction()
{
    int x = 10;
    printf("Call by value:\n");
    printf("testFunction: Before modify functin x = %d\n", x);

    modifyValue(x);
    printf("testFunction: After modify functin x = %d\n", x);

    return 0;
}