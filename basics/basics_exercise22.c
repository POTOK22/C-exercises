/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int num[5], res=0;
    printf("Input the first number: ");
    scanf("%d", &num[0]);
    printf("Input the second number: ");
    scanf("%d", &num[1]);
    printf("Input the third number: ");
    scanf("%d", &num[2]);
    printf("Input the fourth number: ");
    scanf("%d", &num[3]);
    printf("Input the fifth number: ");
    scanf("%d", &num[4]);

    for(int i=0; i<5; i++){
        if(num[i]%2 != 0)
            res += num[i];
    }

    printf("Sum of all odd values: %d", res);

    return 0;
}