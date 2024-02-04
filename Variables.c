/*In C, variables are like containers that hold information. They allow a program to store, 
  manipulate, and work with data. Using variables makes it easier to write and understand code by
  giving names to values and enabling operations on them. */


#include <stdio.h>
#include <stdlib.h>

int main(){

char charactername[] = "John"; /* declares a character array named charactername
                                square brackets ([]) are used to declare arrays, 
                                which allow you to store and manipulate multiple elements 
                                of the same data type
                               */
int characterage = 39;

printf("There was an old man named %s.\n", charactername); /* In the printf function, %s is a placeholder for a string. 
                                                            It is used to insert the value of the charactername variable 
                                                            into the formatted string. */

printf("he was %d years old. \n", characterage); 


characterage = 40; /*You can dynamically adjust the age anywhere in the code by modifying the variable's value, 
                    allowing for flexible updates throughout the program.*/
 
printf("He really liked the name %s. \n", charactername);
printf("but he did not liked being %d\n", characterage);

return 0;

}

/*
Examples: 

%s:
Meaning: Placeholder for a string.

%d:
Meaning: Placeholder for an integer.

%f:
Meaning: Placeholder for a floating-point number.

%c:
Meaning: Placeholder for a character.

%p:
Meaning: Placeholder for a pointer address.

%x or %X:
Meaning: Placeholder for an unsigned hexadecimal integer (lowercase or uppercase).

%o:
Meaning: Placeholder for an octal (base-8) integer.

%u:
Meaning: Placeholder for an unsigned decimal integer.

%e or %E:
Meaning: Placeholder for a floating-point number in scientific notation (lowercase or uppercase).

%g or %G:
Meaning: Placeholder for a floating-point number in either %f or %e format, depending on the value (lowercase or uppercase).

*/