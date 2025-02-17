/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int arr[6], i;  //why six elements???
    printf("Input the 5 members of the array:\n");
    for(i=0; i<5; i++)
        scanf("%d", &arr[i]);
    
    for(i=0; i<5; i++){
        printf("array_n[%d] = %d\n", i, arr[4-i]);
    }

    return 0;
}