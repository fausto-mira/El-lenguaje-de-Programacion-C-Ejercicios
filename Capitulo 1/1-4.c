#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = -10;
    upper = 150;
    step = 10;
    celsius = lower;

    printf("Programa de conversion de temperaturas C a F \n\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 1.8) + 32;
        printf("%3.0f    %6.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}