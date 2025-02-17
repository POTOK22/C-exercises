/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int arr[5], max, pos;

    printf("Input 5 integers:\n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
        if(arr[i-1]<arr[i] && (i != 0)){
            max = arr[i];
            pos = i+1;
        }
    }
    printf("Highest value: %d\n", max);
    printf("Postion: %d", pos);

    return 0;
}