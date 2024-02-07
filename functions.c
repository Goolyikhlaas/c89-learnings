#include <stdio.h>
#include <stdlib.h>

/* In C, a function is a block of code that performs a specific task. 
It is written separately from the main() function, which serves as the starting point
 of the program. To execute a function, you must call it from within the main() function. 
 When the function is called, the program jumps to that function's code, executes it, and 
 then returns to the point where it was called from in the main() function. This allows for 
 modular programming, where tasks are divided into smaller, reusable functions, making the 
 code easier to understand and maintain. */

void sayhi(); /* Function declaration at the top */

void functionwithparameters(char name[], int age);

int main() {

    sayhi(); /* Calls the function sayhi to execute its code */

    functionwithparameters("John", 22);              /* Calls the function functionwithparameters with arguments: name: "John" age: 22 */
    functionwithparameters("Tom", 29);              /* Calls the function functionwithparameters with arguments: name: "Tom" age: 29 */
    functionwithparameters("Sam", 26);             /* Calls the function functionwithparameters with arguments: name: "Sam" age: 26 */
    functionwithparameters("Wick", 25);           /* Calls the function functionwithparameters with arguments: name: "Wick" age: 25 */

    return 0; 
}

/* Function 1 definition */

void sayhi() {

    printf("Hello user\n"); /* Prints a greeting message to the user */
}


/* Function 2 definition */

void functionwithparameters(char name[], int age)   /* Defines a function functionwithparameters with two parameters:
                                                    name: string representing the name.
                                                    age: integer representing the age. */
{
    printf("Hello %s, your are %d\n", name, age );
    

}
