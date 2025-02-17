/*Exercises are from https://www.w3resource.com/c-programming-exercises/array/index.php */

#include <stdio.h>

int main ()
{
    int n, i, j, arr1[10];
    printf("Test Data\n");
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    printf("Input %d elemetns in the array :\n", n);

    for(i=0; i<n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("The unique elements found in the array are : ");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(arr1[i]!=arr1[j])
                printf("%d ", arr1[i]);
                break;
        }
    }

    return 0;
}