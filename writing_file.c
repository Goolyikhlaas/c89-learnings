#include <stdio.h>
#include <stdlib.h>

int main(){

    /* Open a file named "Employees.txt" for writing */
    FILE * fpointer = fopen("Employees.txt", "w");

    /* Write to the file using fprintf */
    fprintf(fpointer,"Tim, salesman.\nPam, Receptionist.\n,Sam, Accountant.");

    /* Close the file */
    fclose(fpointer);

    /* Open the same file in append mode */
    fpointer = fopen("Employees.txt", "a");

    /* Append to the file using fprintf */
    fprintf(fpointer,"\nKelly, Customer Service.");

    /* Close the file */
    fclose(fpointer);

    return 0;
}

/* 

Explanation:

fopen("Employees.txt", "w"); opens a file named "Employees.txt" in write mode ("w"). 
If the file doesn't exist, it will be created. If it does exist, its contents will be truncated.

fprintf(fpointer, ...); writes to the file using fprintf. 
The fpointer is a pointer to the file returned by fopen. 
In this case, we're writing some employee information to the file.

fclose(fpointer); closes the file. 
It's important to close the file after writing to ensure that all data is properly saved.

fopen("Employees.txt", "a"); opens the same file in append mode ("a"). 
Append mode allows you to add data to the end of the file without truncating existing content.
fprintf(fpointer, ...); appends more data to the file, 
in this case, adding information about another employee.

File Extensions: The .txt extension in "Employees.txt" indicates that the file is a text file. 
In C, you can work with various file types, such as .txt for text files, 
.html for HTML files, 
and .csv for CSV files, among others. 
The file extension helps determine how the file is handled and interpreted by programs.

*/