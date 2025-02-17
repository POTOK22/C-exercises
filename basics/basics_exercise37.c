/* Exercises are from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php */

#include <stdio.h>

int main ()
{
    int x, y;
    printf("Input the Coordinate\nx: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    if(x>0 && y>0)
        printf("Quadrant-I(+,+)");
    else if(x<0 && y>0)
        printf("Quadrant-II(+,-)");
    else if(x<0 && y<0)
        printf("Quadrant-III(-,-)");
    else if(x>0 && y<0)
        printf("Quadrant-VI(-,+)");
    return 0;
}