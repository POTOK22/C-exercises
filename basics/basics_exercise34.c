/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int a, b, cnt=0, sum=0;
    printf("Input a pair of numbers (for example 10,2):\nInput first number of the pair: ");
    scanf("%d", &a);
    printf("Input second number of the pair: ");
    scanf("%d", &b);

    // in case the order might get reversed i.e. 10,2 => 2,10
    if(b>a){
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }

    // firtly goes counting
    for(int i=b; i<a; i++){
        if(i%2 != 0)
            cnt++;
    }

    printf("List of odd numbers: %d\n", cnt);

    // secondly goes printing and summing 
    for(int i=b; i<a; i++){
        if(i%2 != 0){
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum = %d", sum);

    return 0;
}