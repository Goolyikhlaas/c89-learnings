#include <stdio.h>
#include <stdlib.h>

/* The return statement in C is like a "hand-off" command. It's used when a function has finished 
its job and wants to give something back to whoever called it. In the given code, both cube() and 
cubesimplermethod() functions finish calculating the cube of a number and hand it back using return. 
For example, in cube() function, after finding the cube of num, return result; gives the cube back to 
whoever called cube(). Similarly, in cubesimplermethod(), return numsimpler * numsimpler * numsimpler; 
hands back the calculated cube to the caller. It's like saying "here's the answer, I'm done!" and letting 
the program continue from where the function was called */


double cube(double num){

    double result = num * num * num;

    return result;
}

/* Or you can write it simpler like this: */

double cubesimplermethod(double numsimpler){

    return numsimpler * numsimpler * numsimpler;

}



int main(){


    /* First method */
    printf("Answer: %f\n", cube(4.0));

    /* Simpler method */

    printf("Answer using simpler method: %f\n", cubesimplermethod(4.0));

    return 0;
}