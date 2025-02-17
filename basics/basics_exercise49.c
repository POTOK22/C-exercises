/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int arr[5], tmp;
    printf("Input the first number of the array: ");
    scanf("%d", arr);

    for(int i=0; i<5; i++){
        arr[i+1]=arr[i]*3;
        printf("n[%d] = %d\n", i, arr[i]);

    }

    return 0;
}