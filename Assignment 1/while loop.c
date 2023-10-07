#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    char a = 'A';

    while (i <= 5) {
    printf("%d\n", i);
    printf("\n");
    i++;
    }

    while (a <= 'Z') {
    printf("%c", a);
    a++;
    }

    return(0);
}
