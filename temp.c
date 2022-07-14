#include <stdio.h>

int main()
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Farenheit Celcius\n");

    while (fahr <= upper) {
      celsius  = (5.0/9.0) * (fahr-32.0);  
      printf("%4.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
        }

        /* Cel to Faren  */

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius Farenheit\n");

    while (celsius <= upper) {
      celsius  = (5.0/9.0) * (fahr-32.0);  
      printf("%4.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
        }
    return 0;
}