/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input number of lines: ");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}