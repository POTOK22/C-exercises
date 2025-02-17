/*Exercises are from https://www.w3resource.com/c-programming-exercises/pointer/index.php */

#include <stdio.h>
#include <string.h>

void changePosition(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

void strPermutation(char *cht, int stno, int endno)
{
    int i;
    if (stno == endno)
        printf("%s ", cht);
    else
    {
        for (i=stno; i<=endno; i++)
        {
            changePosition((cht + stno), (cht + i));
            strPermutation(cht, stno + 1, endno);
            changePosition((cht + stno), (cht + i));
        }
    }
}

int main ()
{
    char str[] = "abc";
    int n = strlen(str);
    printf("The permutations of the string are :\n");
    strPermutation(str, 0, n-1);
    printf("\n");

    return 0;
}