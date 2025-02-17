/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input the specified number: ");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        if(i%2 == 0)
            printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}