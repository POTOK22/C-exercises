/*Exercises are from https://www.w3resource.com/c-programming-exercises/pointer/index.php */

#include <stdio.h>

int main ()
{
    int m = 300;
    float fx = 300.600006f;
    char cht = 'z';

    //declaration of pointer variables
    int *pm = &m;
    float *pfx = &fx;
    char *pcht = &cht;  

    printf("Using & operator : \n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n\n", &cht);

    printf("Using & and * operator :\n");
    printf("value at address of m = %d\n", *&m);
    printf("value at address of fx = %f\n", *&fx);
    printf("value at address of cht = %c\n\n", *&cht);

    printf("Using only pointer variable :\n");
    printf("address of m = %p\n", pm);
    printf("address of fx = %p\n", pfx);
    printf("address of cht = %p\n\n", pcht);

    printf("Using only pointer operator :\n");
    printf("value at address of m = %d\n", *pm);
    printf("value at address of fx = %f\n", *pfx);
    printf("value at address of cht = %c\n", *pcht);

    return 0;
}