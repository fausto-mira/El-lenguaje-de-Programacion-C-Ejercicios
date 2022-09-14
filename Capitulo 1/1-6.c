#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("%d", (c = getchar()) != EOF);
    // el valor es 1
    return 0;
}