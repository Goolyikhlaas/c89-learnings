#include <stdio.h>
#include <stdlib.h>

int main(){
    /* 2D array nums with 3 rows and 2 columns */
    int nums[3][2] = {
                    {1,2},  /* Row 1: |1(idex 0), 2(index 1)|  index position 0*/
                    {3,4},  /* Row 2: |3(idex 0), 4(index 1)|  index position 1*/
                    {5,6}   /* Row 3: |5(idex 0), 6(index 1)|  index position 2*/
                    };

    /* Print the value at index [0][0] (1st row, 1st column) */
    printf("%d\n\n", nums[0][0]);

    /* Nested for loop to print all elements of the array */
    int i, j;
    for(i = 0; i < 3; i++){    /* Loop through each row */
        for(j = 0; j < 2; j++){    /* Loop through each column in the current row */
            printf("%d,", nums[i][j]);    /* Print the element at current row and column */
        }
    }
    printf("\n");

    return 0;
}


