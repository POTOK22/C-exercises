/*Exercises are from https://www.w3resource.com/c-programming-exercises/pointer/index.php */

#include <stdio.h>

int main ()
{
    int a, b, *pa = &a, *pb = &b;

    printf("Test Data :\n");
    printf("Input the first number : ");
    scanf("%d", &a);

    printf("Input the second number : ");
    scanf("%d", &b);

    if (*pa > *pb)
        printf("%d is a maximum number\n", *pa);
    else
        printf("%d is a maximum number\n", *pb);

    return 0;
}