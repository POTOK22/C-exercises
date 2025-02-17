/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int x, y;
    printf("Input two numbers:\nx: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    if(y == 0)
        printf("Division is not possible");
    else
        printf("%.1f", x/(float)y);

    return 0;
}