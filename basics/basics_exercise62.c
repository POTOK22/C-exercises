/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    do {
        printf("Input a positive number less than 500: ");
        scanf("%d", &a);

        if(a < 0 || a>= 500)
            printf("Wrong! The number is too big!");
    }
    while (a < 0 || a >= 500);

    printf("Sum of the digits of %d ", a);

    // // This is done correctly
    // while(a > 0) {
    //     int x = a%10;
    //     a = (a-x)/10;
    //     res += x; 
    // }

    int res = 0;
    // But this is better
    while(a > 0) {
        res += a%10;
        a /= 10;
    }

    printf("is %d", res);

    return 0;
}