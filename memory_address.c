#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main(){
    int age = 22;       /* Declare an integer variable 'age' and assign it the value 22 */
    double gpa = 3.8;   /* Declare a double variable 'gpa' and assign it the value 3.8 */
    char grade = 'A';   /* Declare a character variable 'grade' and assign it the value 'A' */

    printf("age: %p\n", &age);   /* Print the memory address of the 'age' variable using %p format specifier */
    printf("gpa: %p\n", &gpa);   /* Print the memory address of the 'gpa' variable using %p format specifier */
    
    return 0;   /* Return 0 to indicate successful execution of the program */
}
