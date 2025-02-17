/* Exercises are from https://www.w3resource.com/c-programming-exercises/recursion/index.php */

#include <stdio.h>

int sumUpTo(int);

int main ()
{
    int n, sum;
    printf("Test Data :\n");
    printf("Input the last number of the range starting from 1 : ");
    scanf("%d", &n);

    sum = sumUpTo(n);
    printf("The sum of numbers from 1 to %d : %d", n, sum);

    return 0;
}

int sumUpTo(int n)
{
    int res;

    if(n == 1)
        return 1;
    else 
        res = n + sumUpTo(n-1);

    return (res);
}