/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input value:");
    scanf("%d", &a);

    printf("Integer value: %d\n", a);
    printf("The left shifted data is: %d", a<<= 2);

    return 0;
}