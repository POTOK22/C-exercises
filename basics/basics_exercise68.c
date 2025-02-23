/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <math.h>

int main ()
{
    printf("=======================================\n");
    printf("n\t2^n\t2^(-n)\n");
    printf("=======================================\n");

    for(int i = 0; i<=10; i++) {
        int power = 1<<i;
        double inverse = pow(2, -i);
        printf("%2d\t%4d\t%.12lf\n", i, power, inverse); // The (float)1/tmp is good but pow() func is more accurate 
    }
    printf("=======================================\n");

    return 0;
}