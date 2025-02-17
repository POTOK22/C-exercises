/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int p, q, r, s;
    printf("Test data :\n");
    printf("Input the first integer : ");
    scanf("%d", &p);
    while (p % 2 != 0) {
        printf("Input the first integer again : ");
        scanf("%d", &p);
    }
    printf("Input the second integer : ");
    scanf("%d", &q);
    while (q <= 0) {
        printf("Input the second integer again : ");
        scanf("%d", &q);
    }
    printf("Input the third integer : ");
    scanf("%d", &r);
    while (r <= 0) {
        printf("Input the third integer again : ");
        scanf("%d", &r);
    }
    printf("Input the fourth integer : ");
    scanf("%d", &s);
    while (s <= 0) {
        printf("Input the fourth integer again : ");
        scanf("%d", &s);
    }

    if ((q>r) && (s>p) && ((r+s)>(p+q)))
        printf("Correct values");
    else
        printf("Wrong values");

    return 0;
}