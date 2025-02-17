/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, x, r=0;
    printf("Input a number:");
    scanf("%d", &a);

    printf("The original number = %d\n", a);

    while(a >= 1) {     //until the original number is equal or less than 1
        x = a%10;       //extraction of the last digit
        r = r*10 + x;   //addition the last digit to the reversed number
        a = a/10;       //removing the last digit from original number
    }

    printf("The reverse of the said number = %d\n", r);

    return 0;
}