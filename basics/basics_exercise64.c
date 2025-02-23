/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, min, max, cnt = 0, sum = 0;
    printf("Input a positive integer: ");

    // It is possible to merge scanf and if in one
    // Moreover scanf returns 1 if the value is read correclty and 0 if not
    if (scanf("%d", &a) != 1 || a <= 0) {
        printf("Invalid input.\n");
        return 1;
    }
    
    min = max = a;
    sum += a;
    cnt++;

    while (1) {
        printf("Input next positive integer: ");
        if (scanf("%d", &a) != 1 || a <= 0)
            break;
        
        cnt++;
        sum += a;
        if (a > max) max = a;
        if (a < min) min = a;
    }

    printf("\nNumer of positive values entered is: %d\n", cnt);
    printf("Maximum value entered is: %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %f\n", (float)sum/cnt);

    return 0;
}