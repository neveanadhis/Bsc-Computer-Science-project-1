#include <stdio.h>
#include <stdlib.h>

int cube(int a )
{
    int result;

    result = a * a * a;
    return (result);
}


int main(void)
{
    int b;


    b = cube(3);
    printf("The cube of 3 is : %d\n", b);

    return (0);
}
