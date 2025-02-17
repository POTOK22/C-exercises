/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int arr[5], sum=0;
    printf("Input the first number: ");
    scanf("%d", &arr[0]);
    printf("Input the second number: ");
    scanf("%d", &arr[1]);
    printf("Input the third number: ");
    scanf("%d", &arr[2]);
    printf("Input the fourth number: ");
    scanf("%d", &arr[3]);
    printf("Input the fifth number: ");
    scanf("%d", &arr[4]);

    for(int i=0; i<5; i++){
        if(arr[i]%2 != 0)
            sum += arr[i];
    }
    printf("Sum of all odd values: %d\n", sum);

    return 0;
}