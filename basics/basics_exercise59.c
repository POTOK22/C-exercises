/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, i;
    printf("Input any number: ");
    scanf("%d", &a);

    // Printing the sequence
    printf("1");
    for(i=2; i<=a+1; i++)
        printf(" + 1/%d", i);

    // Calculating the sequence
    float sum=0;
    for(i=1; i<=a+1; i++)
        sum += 1/(float)i;

    printf("\nSum = %.2f", sum);

    return 0;
}