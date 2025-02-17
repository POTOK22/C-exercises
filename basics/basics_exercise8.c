/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int time, years, weeks, days;
    printf("Test data :\n");
    printf("Number of days : ");
    scanf("%d", &time);

    years = time/365;
    weeks = (time/7)-(years*52);
    days = time-((years*365)+(weeks*7));

    printf("Years : %d\n", years);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d\n", days);

    return 0;
}