/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, b;
    printf("Input number of lines: ");
    scanf("%d", &a);
    printf("Number of characters in a line: ");
    scanf("%d", &b);

    for(int i=1; i<=a*b; i++){
        printf("%d ", i);
        if(i%b == 0)
            printf("\n");
    }

    return 0;
}