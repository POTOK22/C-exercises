/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b, c;
    float x1, x2;
    printf("Input the first number(a): ");
    scanf("%d", &a);
    printf("Input the second number(b): ");
    scanf("%d", &b);
    printf("Input the third number(c): ");
    scanf("%d", &c);

    x1=((-b+sqrt((b*b)-(4*a*c)))/(2*(float)a));
    x2=((-b-sqrt((b*b)-(4*a*c)))/(2*(float)a));

    printf("Root1 = %f\n", x1);
    printf("Root2 = %f\n", x2);

    return 0;
}