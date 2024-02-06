#include <stdio.h>
#include <stdlib.h>

/* Simple calculator to do addition */

/* %lf is used in scanf() to read double-precision floating-point numbers into double variables.*/

int main()
{

    double num1;
    double num2;

    printf("Enter first number: ");  
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Number1 + number2 = %f", num1 + num2);

    return 0;
}