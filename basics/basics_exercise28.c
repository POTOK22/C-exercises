/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int arr[5], positive=0;
    float sum=0;
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
        if(arr[i]>0){
            positive++;
            sum += arr[i];
        }            
    }

    printf("Number of positvie numbers: %d\n", positive);
    printf("Number of positvie numbers: %.2f\n", sum/positive);

    return 0;
}