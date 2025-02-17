#include <stdio.h>

int main ()
{
    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift
    int x = 6;  //6 = 00000110
    int y = 13; //12 = 00001101
    int z = 0;  //0 = 00000000
    float z2 = 0.0f;
    double z3 = 0.0;
    int w = 6.5;
    int w2 = 6.1;
    int w3 = 6.9;

    //integer operations
    printf("6.5 as an integer result: %d \n", w);
    printf("6.1 as an integer result: %d \n", w2);
    printf("6.9 as an integer result: %d \n", w3);

    //AND operation
    z = x & y;
    printf("AND result: %d \n", z);

    //OR operation
    z = x | y;
    printf("OR result: %d \n", z);

    //XOR operation
    z = x^y;
    printf("XOR result: %d \n", z);

    //left shift operation by 1
    z = x<<1;
    printf("Left shift of x result: %d \n", z);
    
    //right shift operation by 1
    z = x>>1;
    printf("Right shift of x result: %d \n", z);

    //right shift operation by 1
    z = y>>1;
    printf("Right shift of y result: %d \n", z);

    //right shift operation by 1 when z is float type and y is integer
    z = y>>1;
    printf("Right shift of int y when z is float: %f \n", z);

    //right shift operation by 1 when z is double type and y is integer
    z = y>>1;
    printf("Right shift of int y when z is double: %f \n", z);
    
    return 0;
}