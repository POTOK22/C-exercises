/*Exercises are from https://www.w3resource.com/c-programming-exercises/pointer/index.php */

#include <stdio.h>

int main ()
{
    int array[25], i, n;
    printf("Test Data :\n");
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);
    for (i=0; i<n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", array + i); //in scanf syntax there is an exception for an arrays
    }

    for (i=0; i<n; i++)
    {
        printf("The %d element is : %d\n", i, *(array + i));
    }

    return 0;
}