/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, b;
    printf("Input a pair of numbers (for example 10,2 : 2, 10):\nInput first number of the pair: ");
    scanf("%d", &a);
    printf("Input second number of the pair: ");
    scanf("%d", &b);

    if(a<b)
        printf("The pair is in ascending order!");
    else if (a>b)
        printf("The pair is in descending order!");
    else
        printf("The numbers in pair are equal!");

    return 0;
}