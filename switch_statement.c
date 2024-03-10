#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade = 'A';

    switch (grade){

    case 'A':
        printf("You did Great");
        break;

    case 'B':
        printf("You did Alright");
        break;

    case 'C':
        printf("You did Poorly");
        break;

    case 'D':
        printf("You did very bad");
        break;
    
    case 'E':
        printf("You almost fail");
        break;  

    case 'F':
        printf("You Failed");
        break;
    default :
        printf("No result");
    }

    return 0;
}
