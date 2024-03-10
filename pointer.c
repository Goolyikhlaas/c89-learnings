#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 22;       /* Declare an integer variable 'age' and assign it the value 22 */
    int * pAge = &age;  /* Declare an integer pointer 'pAge' and assign it the memory address of 'age' */

    double gpa = 3.4;       /* Declare a double variable 'gpa' and assign it the value 3.4 */
    double * pGpa = &gpa;   /* Declare a double pointer 'pGpa' and assign it the memory address of 'gpa' */

    char grade = 'A';       /* Declare a character variable 'grade' and assign it the value 'A' */
    char * pGrade = &grade; /* Declare a character pointer 'pGrade' and assign it the memory address of 'grade' */

    /* Print the memory address of 'age' using the '%p' format specifier */
    printf("age's memory is: %p\n", &age);

    /* Explanation of a pointer: 
       A pointer is a variable that stores the memory address of another variable. 
       In this code, pAge, pGpa, and pGrade are pointers that store the memory addresses of age, gpa, and grade respectively. */
    
    return 0;
}
