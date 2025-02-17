/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input an integer: ");
    scanf("%d", &a);

    printf("All the divisors of %d are:\n", a);
    for(int i=1; i<=45; i++){
        if(45%i == 0)
            printf("%d\n", i);
    }

    return 0;
}