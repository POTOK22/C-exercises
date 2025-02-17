/*Exercises are from https://www.w3resource.com/c-programming-exercises/array/index.php */

#include <stdio.h>

int main ()
{
    int arr1[100], arr2[100], arr3[100];
    int n, m, k, i, j;
    printf("Test Data\n");
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%d", &n);
    printf("Input %d elemetns in the array :\n", n);
    for(i=0; i<n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Input the number of elements to be stored in the second array : ");
    scanf("%d", &m);
    printf("Input %d elemetns in the array :\n", m);
    for(i=0; i<m; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr2[i]);
    }

    /*merge two arrays*/
    k=n+m;
    for(i=0; i<n; i++)
        arr3[i]=arr1[i];

    for(i=n; i<n+m; i++)
        arr3[i]=arr2[i-n];

    /*sort array*/
    for(i=0; i<k; i++) {
        for(j=0; j<k-1; j++) {
            if(arr3[j]<=arr3[j+1]){
                int temp = arr3[j+1];
                arr3[j+1]=arr3[j];
                arr3[j]=temp;
            }   
        }
    }

    printf("The merged array in decending order is :\n");
    for(i=0; i<k; i++)
        printf("%d ", arr3[i]);

    return 0;
}