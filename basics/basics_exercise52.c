/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, i;
    printf("Input the length of the array: ");
    scanf("%d", &a);

    // Memory allocation
    int *arr = (int*)malloc(a *sizeof(int));

    // Checking if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Input the array elements:\n");
    for(i=0; i<a; i++)
        scanf("%d", &arr[i]);

    int tmp = arr[0];
    int tmp2 = 0; 

    for(i=1; i<a; i++) {
        if(arr[i]<tmp) {
            tmp = arr[i];
            tmp2 = i;
        }
    }

    printf("Smallest Value: %d\n", tmp);
    printf("Position of the element: %d", tmp2);

    free(arr);

    return 0;
}