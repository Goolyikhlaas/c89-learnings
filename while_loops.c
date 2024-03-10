#include <stdio.h>
#include <stdlib.h>

int main(){
    int index = 1;  /* Initialize the index variable to 1 */
    while (index <= 5){ /* Loop while index is less than or equal to 5 */
        printf("%d\n", index); /* Print the value of index */
        index = index + 1;    /* Increment the index by 1 (or use index++) */
    }

    return 0; /* Return 0 to indicate successful completion */
}
