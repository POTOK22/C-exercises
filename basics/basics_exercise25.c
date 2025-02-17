/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a;
    char arr[12][20]={"January", "Feburary", "March", "April", "May", "June", "July",
         "August", "September", "October", "November", "December"};
    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%d", &a);

    printf("%s", arr[a-1]);

    return 0;
}