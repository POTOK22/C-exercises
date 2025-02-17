/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a = 125, b = 12345;
    long int ax = 123457890;
    short int s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c ='W';
    unsigned long int ux = 2541567890;
    
    printf("int a = %d, int b = %d\n", a, b);
    printf("long ax = %ld\n", ax);
    printf("short s = %hd\n", s);
    printf("float x = %f\n", x);
    printf("double dx = %lf\n", dx);
    printf("char c = %c\n", c);
    printf("unsigned long int ux = %lu\n", ux);

    return 0;
}