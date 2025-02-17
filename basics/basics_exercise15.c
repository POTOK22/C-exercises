/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2)
{
    float res = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    return res;
}

int main ()
{
    int x1, x2, y1, y2;
    float res;
    printf("Test data :\n");
    printf("Input x1 : ");
    scanf("%d", &x1);
    printf("Input y1 : ");
    scanf("%d", &y1);
    printf("Input x2 : ");
    scanf("%d", &x2);
    printf("Input y2 : ");
    scanf("%d", &y2);

    res = distance(x1, y1, x2, y2);
    printf("Distance between the said points : %.4f", res);

    return 0;
}