/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    float a, b, c;
    printf("Input the first number: ");
    scanf("%f", &a);
    printf("Input the second number: ");
    scanf("%f", &b);
    printf("Input the third number: ");
    scanf("%f", &c);

    if((c > a+b) || (a > c+b) || (b > a+c) || (a == b && b == c))
        printf("Perimeter = %.1f", a+b+c);
    else
        printf("The triangle is not valid");

    return 0;
}