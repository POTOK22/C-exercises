/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input an integer: ");
    scanf("%d", &a);

    for(int i=1; i<=100; i++){
        if(i%a == 3)
            printf("%d\n", i);
    }

    return 0;
}