/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int i;
    float arr[4], res=0;
    printf("Input real four numbers:\n");

    for(i=0; i<4; i++)
        scanf("%f", &arr[i]);
    
    // // According to the time complexity this approach with two for loops is O(n^2)
    // for(i=1; i<=4; i++){
    //     for(int j=1; j<=4; j++){
    //         if (arr[i-1]-arr[j-1]>res)
    //             res = arr[i-1]-arr[j-1];
    //     }
    // }

    // in order to make this code more efficient this approach has time complexity O(n)
    float min, max;
    min = max = arr[0];

    for(i=1; i<4; i++){
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }

    res = max - min;

    printf("Difference is: %.4f", res);
    
    return 0;
}