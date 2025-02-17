/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    printf("Input an integer: ");
    scanf("%d", &a);

    if(a>=80 || a<0)
        printf("Error - the integer is out of the range");
    else {
        int range = ((a/10)+1)*10;
        printf("Range [0, %d]", range);
    }
    return 0;
}