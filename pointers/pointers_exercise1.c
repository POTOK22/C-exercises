/*Exercises are from https://www.w3resource.com/c-programming-exercises/pointer/index.php */

#include <stdio.h>

int main ()
{
    int m = 10, n, o;
    int *z = &m;

    printf("z stores the address of m = %p\n", z);
    printf("*z stores the value of m = %d\n", m);
    printf("&m is the address of m = %p\n", &m);
    printf("&n stores the address of n = %p\n", &n);
    printf("&o  stores the address of o = %p\n", &o);
    printf("&z stores the address of z = %p\n", &z);

    return 0;
}