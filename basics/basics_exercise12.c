/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    char id[10];
    int hours, salary, size;
    float res;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &id);
    printf("Input the working hrs: ");
    scanf("%d", &hours);
    printf("Salary amount/hr: ");
    scanf("%d", &salary);

    res = hours*(float)salary;

    printf("\n");
    printf("Employees ID = %s\n", id);
    printf("Salary = U$ %.2f", res);

    return 0;
}