#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 22;       /* Declare an integer variable 'age' and assign it the value 22 */
    int *pAge = &age;   /* Declare an integer pointer 'pAge' and assign it the memory address of 'age' */

    printf("*d", *pAge);   /* Print the value stored at the memory address pointed to by pAge using the '%d' format specifier */
    
    printf("%d", &age);     /* This will print the memory address of age */
    printf("%d", *&age);    /* This will dereference and print the data of the memory address of age */
    printf("%d", &*&age);   /* This will print the memory address of age */
    printf("%d", *&*&age);  /* This will dereference and print the data of age */

    return 0;
}
