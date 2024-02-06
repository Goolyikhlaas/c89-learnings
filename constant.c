#include <stdio.h>
#include <stdlib.h>

/* Constants are variables whose values cannot be changed once they are defined. 
   Here, we demonstrate the use of variables and constants in C. */

int main() {



    int num = 23; /* Define and initialize a variable 'num' with the value 23 */

    printf("Variable 'num' value: %d\n", num); /* Print the value of 'num' (variable) */

    num = 26; /* Change the value of 'num' to 26 */

    printf("Variable 'num' updated value: %d\n", num); /* Print the updated value of 'num' (variable) */



/* CONSTANT EXPLANATION BELOW >>>>>> */

    const int NUM = 23; /* Define a constant 'NUM' with the value 23 */

    printf("Constant 'NUM' value: %d\n", NUM); /* Print the value of 'NUM' (constant) */

    /* Attempting to change the value of 'NUM' will result in a compilation error 
       since it is a constant */

    /*NUM = 30;*/  /* Uncommenting this line will result in a compilation error */

    return 0;
}
