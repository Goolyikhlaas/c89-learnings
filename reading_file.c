#include <stdio.h>  
#include <stdlib.h>

int main(){  

    char line[255];  /* Declare an array of characters (a string) named "line" with a maximum length of 255 characters. */
    FILE *fpointer = fopen("Employeees.txt", "r");  /* Declare a file pointer named "fpointer" and open the file "Employeees.txt" in read mode. */

    fgets(line, 255, fpointer);  /* Read a line of text from the file pointed to by "fpointer" into the array "line" with a maximum length of 255 characters. */
    fprintf("%s", line);  /* Print the contents of the "line" array to the standard output (usually the console). */

    fclose(fpointer);  /* Close the file pointed to by "fpointer" to free up system resources. */
    return 0;  /* Return 0 to indicate that the program executed successfully. */
}
