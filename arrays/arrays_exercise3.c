/*Exercises are from https://www.w3resource.com/c-programming-exercises/array/index.php */

#include <stdio.h>

int main ()
{
    int n, i, arr[10], sum=0;
    printf("Test Data\n");
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    printf("Input %d elemetns in the array :\n", n);

    for(i=0; i<3; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    
    printf("Sum of all elements stored in the array is : %d", sum);

    return 0;
}