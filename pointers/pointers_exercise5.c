/*Exercises are from https://www.w3resource.com/c-programming-exercises/pointer/index.php */

#include <stdio.h>

//This function will be called by reference
int AddTwoNumbers(int *, int *);

int main ()
{
    int a, b, sum;

    printf("Test Data :\n");
    printf("Input the first number : ");
    scanf("%d", &a);

    printf("Input the second number : ");
    scanf("%d", &b);

    sum = AddTwoNumbers(&a, &b);

    printf("The sum of %d and %d is %d", a, b, sum);

    return 0;
}
 
int AddTwoNumbers(int *num1, int *num2)
{
    int sum;
    sum = *num1 + *num2;
    return sum;
}
