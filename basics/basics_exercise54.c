/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input Data: ");
    scanf("%d", &a);

    printf("Distance of %.2f cms is = %.2f inches", (float)a, (float)a/2.54);

    return 0;
}