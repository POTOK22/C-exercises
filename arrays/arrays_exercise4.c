/*Exercises are from https://www.w3resource.com/c-programming-exercises/array/index.php */

#include <stdio.h>

int main ()
{
    int n, i, arr1[10], arr2[10];
    printf("Test Data\n");
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    printf("Input %d elemetns in the array :\n", n);

    for(i=0; i<n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
        arr2[i]=arr1[i];
    }

    printf("The elements stored in the first array are : \n");
    for (i=0; i<n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    printf("The elements stored in the second array are : \n");
        for (i=0; i<n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}