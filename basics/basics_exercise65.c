/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <math.h>

int main ()
{
    int cnt = 0;
    printf("The prime numbers between 1 and 199 are:\n");
    printf("2 ");
    cnt++;

    for(int i = 3; i < 200; i+=2) {
        int is_prime = 1;
        for (int j = 2; j < sqrt(i); j++) {
            if (i%j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
            cnt++;
            if (cnt%10 == 0)
                printf("\n");
        }
    }

    return 0;
}