/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a_num, a_weg, b_num, b_weg;
    double res; 
    
    printf("Weight - Item1: ");
    scanf("%d", &a_weg);
    printf("No. of item 1: ");
    scanf("%d", &a_num);

    printf("Weight - Item2: ");
    scanf("%d", &b_weg);
    printf("No. of item 2: ");
    scanf("%d", &b_num);

    res = ((((double)a_weg*a_num)+(b_weg*b_num))/(a_num+b_num));

    printf("Average Value = %f", res);

    return 0;
}