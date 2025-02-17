/* Exercises are from https://www.w3resource.com/c-programming-exercises/recursion/index.php */

#include <stdio.h>

int numPrint(int);

int main ()
{
    int n=1;
    printf("The natural numbers are : ");
    numPrint(n);

    return 0;
}

int numPrint(int n)
{
    if (n<=50) {
        printf("%d ", n);
        numPrint(n+1);
    }

}