/*Exercises are from https://www.w3resource.com/c-programming-exercises/array/index.php */

#include <stdio.h>

int main ()
{
    int n, i, j, arr[10], cnt=0;
    printf("Test Data\n");
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    printf("Input %d elemetns in the array :\n", n);

    for(i=0; i<n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                cnt++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is : %d", cnt);

    return 0;
}