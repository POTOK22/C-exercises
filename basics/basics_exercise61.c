/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <math.h>

int main ()
{
    double x, y;
    printf("Input value of x:");
    scanf("%lf", &x);

    y = sin(1/x);

    printf("Value of sin(1/x) is: %.4lf", y);

    return 0;
}