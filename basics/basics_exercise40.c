/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, b;
    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);

    // in case that a was bigger than b
    if (a>b){
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }

    for(int i=a; i<b; i++){
        if((i%7 == 2) || (i%7 == 3))
            printf("%d\n", i);
    }

    return 0;
}