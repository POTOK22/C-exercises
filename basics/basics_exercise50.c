/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int arr[5], i;
    printf("Input the 5 members of the array:\n");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);
    
    for(i=0; i<5; i++){
        if(arr[i] < 5)
            printf("A[%d] = %d\n", i, arr[i]);
    }

    return 0;
}