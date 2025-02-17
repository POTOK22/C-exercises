/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

float fuelComp(int a, float b) {
    float res = a/b;
    return res;
}

int main ()
{
    int distance;
    float fuel, result;
    printf("Test data :\n");
    printf("Input total distance in km: ");
    scanf("%d", &distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    result = fuelComp(distance, fuel);
    printf("Average consumption (km/lt) : %.3f", result);

    return 0;
}