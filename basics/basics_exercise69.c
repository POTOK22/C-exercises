/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    printf("Mx 0 1 2 3 4 5 6 7 8 9 10\n");
    printf("======================================\n");

    for (int i=0; i<=10; i++) {
        printf("%d ", i);
        for (int j=0; j<=i; j++) {
            printf("%d ", 1+j);
        }
        printf("\n");
    }
    
    printf("======================================\n");

    return 0;
}