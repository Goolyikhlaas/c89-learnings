#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade = 'A'; /* Define a variable 'grade' and initialize it to 'A' */

    switch (grade){ /* Start a switch statement based on the value of 'grade' */

    case 'A': /* If 'grade' is 'A' */
        printf("You did Great"); /* Print "You did Great" */
        break; /* Exit the switch statement */

    case 'B': /* If 'grade' is 'B' */
        printf("You did Alright"); /* Print "You did Alright" */
        break; /* Exit the switch statement */

    case 'C': /* If 'grade' is 'C' */
        printf("You did Poorly"); /* Print "You did Poorly" */
        break; /* Exit the switch statement */

    case 'D': /* If 'grade' is 'D' */
        printf("You did very bad"); /* Print "You did very bad" */
        break; /* Exit the switch statement */
    
    case 'E': /* If 'grade' is 'E' */
        printf("You almost fail"); /* Print "You almost fail" */
        break; /* Exit the switch statement */  

    case 'F': /* If 'grade' is 'F' */
        printf("You Failed"); /* Print "You Failed" */
        break; /* Exit the switch statement */

    default : /* If 'grade' is none of the above */
        printf("No result"); /* Print "No result" */
    }

    return 0; /* Exit the program */
}
