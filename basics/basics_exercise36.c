/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>
#include <string.h>

int main ()
{
    // the correct password is 1234
    char pass[10];
    while(1){
        printf("Input the password: ");
        scanf("%s", pass);

        if (strcmp(pass, "1234")==0){
            printf("Correct password");
            break;
        }
        else
        printf("Incorrect password\n");
    }

    return 0;
}