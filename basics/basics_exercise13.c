/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

void maxOf3 (int no1, int no2, int no3)
{
    int temp;
    if(no1>no2)
        temp = no1;
    else
        temp = no2;
    
    if(temp>no3)
        printf("Biggest of three is : %d", temp);
    else
        printf("Biggest of three is : %d", no3);
}

int main ()
{
    int no1, no2, no3;
    printf("Test data :\n");
    printf("Input the first integer : ");
    scanf("%d", &no1);
    printf("Input the second integer : ");
    scanf("%d", &no2);
    printf("Input the third integer : ");
    scanf("%d", &no3);

    maxOf3(no1, no2, no3);

    return 0;
}