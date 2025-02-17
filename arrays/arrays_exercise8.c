/*Exercises are from https://www.w3resource.com/c-programming-exercises/array/index.php */

#include <stdio.h>

int main ()
{
    int n, i, j, arr1[100], arr2[100], cnt;
    printf("Test Data\n");
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    printf("Input %d elemetns in the array :\n", n);

    for(i=0; i<n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
        arr2[i]=-1;
    }

    for(i=0; i<n;i++) {
        cnt=1;
        for(j=i+1; j<n; j++) {
            if(arr1[i]==arr1[j]) {
                cnt++;
                arr2[j]=0;
            }
        }
        if(arr2[i] != 0)
            arr2[i]=cnt;
    }

    printf("The frequency of all elements of an array : \n");
    for(i=0; i<n; i++) {
        if(arr2[i] != 0)
            printf("%d occurs %d times\n", arr1[i], arr2[i]);
    }

    return 0;
}