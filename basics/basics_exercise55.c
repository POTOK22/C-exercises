/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int x,y;
    printf("Input value of x & y:\n");
    scanf("%d%d", &x, &y);

    printf("Before swapping the value of x & y: %d %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping the value of x & y: %d %d", x, y);

    return 0;
}