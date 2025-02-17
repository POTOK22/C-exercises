#include <stdio.h>

int main ()
{
    int b = 5;
    int c = 7;
    int d;

    //ternary conditional operator as a delcaration of variable
    //which number is bigger
    int a = (b>c) ? b : c; 
    
    printf("%d\n", a);

    //ternary conditional operator as a absolute value
    printf("Enter the number: ");
    scanf("%d", &d);
    d = d < 0 ? -d : d;
    printf("Absolute value of entered number is: %d\n", d);
    return 0;
}