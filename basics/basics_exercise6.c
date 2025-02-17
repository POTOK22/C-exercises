/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main ()
{
    int radius;
    scanf("%d", &radius);
    float perimeter = 2*M_PI*radius;
    float area = 2*M_PI*radius*radius;
    printf("Perimeter of the Circle = %f inches\n", perimeter);
    printf("Area of the Circle = %f square inches\n", area);

    return 0;
}