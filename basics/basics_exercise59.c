/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, i;
    float sum=0;
    printf("Input any number: ");
    scanf("%d", &a);

    // Printing the sequence
    printf("1");
    for(i=2; i<=a+1; i++)
        printf(" + 1/%d", i);

    // Calculating the sequence
    for(i=1; i<=a+1; i++)
        sum += 1/(float)i;

    printf("\nSum = %.2f", sum);

    return 0;
}