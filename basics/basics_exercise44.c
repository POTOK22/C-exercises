/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a=0, b, cnt=0;
    printf("Input Mathematics marks (0 to terminate): ");

    while (1){
        scanf("%d", &b);
        if(b == 0)
            break;
        a += b;
        cnt++;
    }

    printf("Average marks in Mathematics : %.2f", ((float)a/cnt));

    return 0;
}