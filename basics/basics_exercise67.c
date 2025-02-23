/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int n, x;
    do {
        printf("Input the values of x and n: ");
        if (scanf("%d%d", &x, &n) != 2) {
            printf("Invalid input! Enter two integers.\n");
            return 1;
        }
        if (n < 0)
            printf("Wrong number! Please Try again.\n");
    } while (n < 0);

    printf("x=%d, n=%d\n", x, n);

    
    // // This is good => O(n) complexity
    // int y = 1;
    // for(int i = 0; i<n; i++)
    //     y *= x;

    // But this is better => O(log(n)) complexity
    int y = 1, base = x, exp = n;
    while(exp > 0){
        if(exp%2 == 1)
            y *= base;
        base *= base;
        exp /= 2;
    }

    printf("x to power n = %d\n", y);

    return 0;
}