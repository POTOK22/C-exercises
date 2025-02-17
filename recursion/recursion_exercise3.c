/* Exercises are from https://www.w3resource.com/c-programming-exercises/recursion/index.php */

#include <stdio.h>

int fibonacci(int);

int main ()
{
    int n;
    printf("Test data :\n");
    printf("Input number of terms for the Series (<20) : ");
    scanf("%d", &n);
    printf("The series are :\n");
    for (int i = 0; i<n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}

int fibonacci(int n)
{
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);

}