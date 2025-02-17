/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input an integer: ");
    scanf("%d", &a);

    if(a>0)
        printf("Positive ");
    else if (a<0)
        printf("Negative ");
    if (a%2 == 0)
        printf("Even");
    else if (a%2 != 0)
        printf("Odd");

    return 0;
}