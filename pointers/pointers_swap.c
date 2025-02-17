#include <stdio.h>

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main ()
{
    int x = 10, y = 20;
    printf("Numbers before swap : %d %d\n", x, y);

    swap(&x, &y);

    printf("Numbers after swap : %d %d\n", x, y);

    return 0;
}