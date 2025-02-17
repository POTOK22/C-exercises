/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

void secToHrs(int sec) 
{
    int hrs, min;
    hrs = sec / 3600;
    min = (sec / 60) - (hrs * 60);
    sec = sec - (min * 60) - (hrs * 3600);
    printf("H:M:S - %d:%d:%d", hrs, min, sec);
}

int main ()
{
    int seconds;
    printf("Test data :\n");
    printf("Input seconds : ");
    scanf("%d", &seconds);
    printf("There are :\n");

    secToHrs(seconds);

    return 0;
}