/*Exercises are from https://www.w3resource.com/c-programming-exercises/array/index.php */

#include <stdio.h>

int main ()
{
    int arr[10], i;
    printf("Test Data\n");
    printf("Input 10 elements in the array :\n");
    for (i = 0; i<10; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: ");
    for (i=0; i<10; i++)
        printf("%d ", arr[i]);

    return 0;
}