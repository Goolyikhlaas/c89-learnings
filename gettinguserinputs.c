#include <stdio.h>
#include <stdlib.h>

/** 
 * This program demonstrates input and output operations in C.
 * It prompts the user to enter their age, GPA, grade, and name,
 * then displays the entered values.
 */

int main() {
  
    int age; /**< Variable to store the user's age */
    /* Prompt the user to enter their age */
    printf("Enter your age: ");
    /* Read the age entered by the user and store it in the 'age' variable */ 
    scanf("%d", &age);
    /*Display the user's age*/ 
    printf("Your age is %d\n\n", age);


    double gpa; /**< Variable to store the user's GPA */
    /* Prompt the user to enter their GPA */ 
    printf("Enter your GPA: ");
    /*Read the GPA entered by the user and store it in the 'gpa' variable */ 
    scanf("%lf", &gpa);
    /* Display the user's GPA */ 
    printf("Your GPA is %f\n\n", gpa);


    char grade; /**< Variable to store the user's grade */
    /* Prompt the user to enter their grade */ 
    printf("Enter your Grade: ");
    /* Read the grade entered by the user and store it in the 'grade' variable */ 
    scanf(" %c", &grade); // Add a space before %c to consume any leading whitespace characters
    /* Display the user's grade */ 
    printf("Your Grade is %c\n\n", grade);


    char name[20]; /**< Array to store the user's name */
    /* Prompt the user to enter their name */ 
    printf("Enter your name: ");
    /* Read the name entered by the user and store it in the 'name' array */ 
    scanf("%s", name);
    /*  Display the user's name */
    printf("Your name is %s\n\n", name);


    char name_withspace[20]; /**< Array to store the user's name with space */
    /* Prompt the user to enter their name (with space) */ 
    printf("Enter your Full-name: ");
    /* Read the name (with space) entered by the user and store it in the 'name_withspace' array */ 
    fgets(name_withspace, 20, stdin);
    /* Display the user's name (with space) */ 
    printf("Your Full-name is %s\n\n", name_withspace);

    return 0;
}
