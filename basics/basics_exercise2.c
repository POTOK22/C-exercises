/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    #if __STDC_VERSION__ >= 201710L
        printf("I am using C18!\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("I am using C11!\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("I am using C99!\n");
    #else
        printf("I am using C89/C90!\n");
    #endif

    return 0;
}