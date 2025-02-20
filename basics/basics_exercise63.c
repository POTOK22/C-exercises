/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, res = 0;
    do {
        printf("Input a positive number less than 100: ");
        scanf("%d", &a);

        if(a < 0 || a >= 100)
            printf("Wrong number! The number is not an positive integer or is bigger than 100.\n");
    }
    while (a < 0 || a >= 100);

    // // This is correct
    // for (int i=0; a >= x; i++) {
    //     x += i;
    //     if (a <= x) {
    //         break;
    //     }
    //     res += x*x*x*x;
    // }

    // But this is better - maximum optimalization
    int x = 1;
    for(int i = 1; x <= a; i++) {
        int x2 = x*x; 
        res += x2*x2;
        x += i;
    }

    printf("Sum of the series is %d", res);

    return 0;
}