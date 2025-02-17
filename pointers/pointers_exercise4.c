/*Exercises are from https://www.w3resource.com/c-programming-exercises/pointer/index.php */

#include <stdio.h>

int main ()
{
    int a, b, *pa, *pb, sum;

    printf("Test Data :\n");
    printf("Input the first number : ");
    scanf("%d", &a);

    printf("Input the second number : ");
    scanf("%d", &b);

    pa = &a;    //assign the adress of first number to int pointer variable pa 
    pb = &b;    //assign the adress of second number to int pointer variable pb 

    sum = *pa + *pb;
    
    printf("The sum of entered number is : %d\n", sum);

    return 0;
}