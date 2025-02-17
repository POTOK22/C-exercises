/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int p, r, t, res;
    printf("Input principle, rate of interest and time:\n");
    scanf("%d%d%d", &p, &r, &t);

    res = (p*r*t)/100;

    printf("Simple interst = %d", res);

    return 0;
}