/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input number of lines: ");
    scanf("%d", &a);

    for(int i=1; i<=a*3; i++){
        printf("%d ", i);
        if(i%3 == 0)
            printf("\n");
    }

    return 0;
}