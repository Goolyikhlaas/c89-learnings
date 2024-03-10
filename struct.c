#include <stdio.h>   /* Include standard input/output header */
#include <stdlib.h>  /* Include standard library header */
#include <string.h>  /* Include string manipulation functions */

/* Define a structure named 'student' to store student information */
struct student{
    char name[50];   /* Define a character array to store the student's name */
    char major[50];  /* Define a character array to store the student's major */
    int age;         /* Define an integer to store the student's age */
    double gpa;      /* Define a double to store the student's GPA */
};

int main(){

    struct student student1;  /* Declare a variable 'student1' of type 'struct student' */
    student1.age = 22;         /* Assign a value of 22 to the 'age' member of 'student1' */
    student1.gpa = 3.2;        /* Assign a value of 3.2 to the 'gpa' member of 'student1' */
    strcpy( student1.name, "Jim");     /* Copy the string "Jim" into the 'name' member of 'student1' */
    strcpy( student1.major, "Business"); /* Copy the string "Business" into the 'major' member of 'student1' */

    printf("%s\n", student1.name);  /* Print the name of 'student1' using printf */

    struct student student2;  /* Declare a variable 'student2' of type 'struct student' */
    student2.age = 22;         /* Assign a value of 22 to the 'age' member of 'student2' */
    student2.gpa = 3.2;        /* Assign a value of 3.2 to the 'gpa' member of 'student2' */
    strcpy( student2.name, "Tom");     /* Copy the string "Tom" into the 'name' member of 'student2' */
    strcpy( student2.major, "Business"); /* Copy the string "Business" into the 'major' member of 'student1' */

    printf("%s", student2.name);

    return 0;  /* Exit the program */
}
