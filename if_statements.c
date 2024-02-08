#include <stdio.h>
#include <stdlib.h>

/* 1st Using an if statement to compare two numbers */

int max(int num1, int num2){
    int result1;
    if (num1 > num2){
        result1 = num1;
    }else {
        result1 = num2;
    }
    return result1;
}

/* Comparing more than 2 numbers */
int compare_max(int number1, int number2, int number3){
    int result;
    if(number1 >= number2 && number1 >= number3){
        result = number1;
    }else if(number2 >= number1 && number2 >+ number3){
        result = number2;
    }else {
        result = number3;
    }
    return result;
}


int main(){

    printf("%d\n", max(10, 30));

    printf("%d\n", compare_max(60, 40, 20));

    /* Other if statements */

/* Explanation: The condition (3 > 2 || 2 > 5) is true because at least one of the conditions is true (3 > 2). So, "True" is printed. */
if(3 > 2 || 2 > 5){
    printf("Condition 1: At least one condition is true\n");
} else {
    printf("Condition 1: Both conditions are false\n");
}

/* Explanation: The condition (3 > 2 && 2 > 5) is false because both conditions are not true. So, "False" is printed. */
if(3 > 2 && 2 > 5){
    printf("Condition 2: Both conditions are true\n");
} else {
    printf("Condition 2: At least one condition is false\n");
}

/* Explanation: The condition (3 == 2) is false because 3 is not equal to 2. So, "False" is printed. */
if(3 == 2){
    printf("Condition 3: Both numbers are equal\n");
} else {
    printf("Condition 3: Numbers are not equal\n");
}

/* Explanation: The condition (3 != 2) is true because 3 is not equal to 2. So, "True" is printed. */
if(3 != 2){
    printf("Condition 4: Numbers are not equal\n");
} else {
    printf("Condition 4: Both numbers are equal\n");
}

/* Explanation: The condition !(3 > 2) is false because (3 > 2) is true. The ! operator negates the result, so "False" is printed. */
if(!(3 > 2)){
    printf("Condition 5: Negated condition is false\n");
} else {
    printf("Condition 5: Negated condition is true\n");
}

return 0;

}
