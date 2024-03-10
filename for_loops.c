#include <stdio.h>
#include <stdlib.h>

int main(){

    int luckynumber[] = { 20, 30, 10, 12, 26, 14}; /* Array of lucky numbers */
    int i; /* Loop variable */

    /* Loop through the array and print each element */
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", luckynumber[i]); /* Print the current element */
    }
    
    return 0; /* Return 0 to indicate successful completion */
}
