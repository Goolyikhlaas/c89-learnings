#include <stdio.h>
#include <stdlib.h>

/*When using scanf() in C to read strings with %s, it stops reading input as soon as it encounters whitespace
 (such as a space, tab, or newline character). This means that if the user inputs a string with spaces, 
 scanf() will only read characters up to the first space and leave the remaining input in the buffer. 
 To read strings containing spaces, fgets() is a better choice as it reads an entire line of text, i
 ncluding spaces, and stores it in the specified buffer.*/


int main(){

char colour[20];
char noun[20];
char celebrityname[20];


printf("Enter colour: ");
scanf("%s", colour);

printf("Enter a noun: ");
scanf("%s", noun);

printf("Enter a celebrity first's name: ");
scanf("%s", celebrityname);


printf("Roses are %s\n", colour);
printf("%s are blue\n", noun);
printf("i love %s\n", celebrityname);


    return 0;
}