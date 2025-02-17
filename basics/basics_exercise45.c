/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    float res = 0;
    for(int i=1; i<=50; i++){
        res += (1/(float)i);
    }
    printf("Value of S: %.2f", res);

    return 0;
}