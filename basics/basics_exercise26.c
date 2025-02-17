/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    for(int i=0; i<=50; i++){
        if(i%2 == 0)
            printf("%d ", i);
    }
    return 0;
}