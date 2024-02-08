#include <stdio.h>
#include <stdlib.h>


int main(){

double num1;
double num2;
char operator;

printf("Enter first number: \n");
scanf("%lf", &num1);

printf("Enter Operator: \n");
scanf(" %c", &operator);

printf("Enter second number: \n");
scanf("%lf", &num2);

if(operator == '+'){
    printf("%f", num1 + num2);
}else if(operator == '-'){
    printf("%f", num1 - num2);
}else if(operator == '*'){
    printf("%f", num1 * num2);
}else if(operator == '/'){
    printf("%f", num1 / num2);
}else printf("Invalid operator");

    return 0;
}