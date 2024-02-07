#include <stdio.h>
#include <stdlib.h>

/*In C, an array is a fixed-size collection of elements of the same data type,
 accessed by integer indices starting from 0. It provides a structured way to store 
 and manipulate related data, with elements accessed using the array name followed by 
 the index enclosed in square brackets. Initialization can be done at declaration or later, 
 and arrays are commonly traversed using loops for efficient processing.*/

int main()
{

    int myluckynumber[] = {23, 26, 14, 10, 12};  /* index number 0 = 23, 1 = 26, 2 = 14, 3 = 10, 4 = 12 */

    myluckynumber[0] = 22; /* Changes the value at index 0 of myluckynumber from 23 to 22 */

    printf("%d\n", myluckynumber[1]); /* This will print number 26 */

    printf("%d\n", myluckynumber[0]); /* This will output 22 since we changed the value */



    int unluckynumbers[10]; /* Declares an array named unluckynumbers capable of holding 10 integers  */

    unluckynumbers[0] = 200; /* Assigns the value 200 to the first element (index 0) of the unluckynumbers array */

    printf("%d\n", unluckynumbers[0]); /* Prints the value stored in the first element of the unluckynumbers array */

    return 0;
    
}