/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    enum Days {
        SUN,
        MON,
        TUE,
        WED,
        THU,
        FRI,
        SAT
    };

    printf("Sun = %d\nMon = %d\nTue = %d\nWed = %d\nThu = %d\nFri = %d\nSat = %d\n",
        SUN, MON, TUE, WED, THU, FRI, SAT);

    return 0;
}