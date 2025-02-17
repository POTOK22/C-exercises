/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

//first approach
// void banknotes(int val)
// {
//     int amount;
//     amount = val / 100;
//     printf("%d Note(s) of 100\n", amount);
//     val = val - amount * 100;
//     amount = val / 50;
//     printf("%d Note(s) of 50\n", amount);
//     val = val - amount * 50;
//     amount = val / 20;
//     printf("%d Note(s) of 20\n", amount);
//     val = val - amount * 20;
//     amount = val / 10;
//     printf("%d Note(s) of 10\n", amount);
//     val = val - amount * 10;
//     amount = val / 5;
//     printf("%d Note(s) of 5\n", amount);
//     val = val - amount * 5;
//     amount = val / 2;
//     printf("%d Note(s) of 2\n", amount);
//     if ((val - amount * 2) == 0)
//         printf("0 Note(s) of 1");
//     else
//         printf("1 Note(s) of 1");
// }

//second approach with for loop
void banknotes (int val)
{
    int amount = 0, nums[]={100, 50, 20, 10, 5, 2, 1};

    for(int i = 0; i<7; i++) {
        val = val - amount * nums[i-1];
        amount = val / nums[i];
        printf("%d Note(s) of %d\n", amount, nums[i]);
    }
}

int main ()
{
    int val;
    printf("Test data : \n");
    printf("Input the amount : ");
    scanf("%d", &val);
    printf("There are : \n");

    banknotes(val);

    return 0;
}