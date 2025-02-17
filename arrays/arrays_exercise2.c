/*Exercises are from https://www.w3resource.com/c-programming-exercises/array/index.php */

#include <stdio.h>

int main ()
{
    int arr[10], i, n;
    printf("Test Data\n");
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i<n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The values store into the array are: ");
    for (i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("The values store into the array in reverse are: ");
    for (i=n-1; i>=0; i--)
        printf("%d ", arr[i]);

    return 0;
}