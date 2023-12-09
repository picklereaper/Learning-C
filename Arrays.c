#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int luckyNumbers[] = {4, 8, 12, 16, 20, 24};
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);

/* If you are unsure about what you want in the array,
 you can create the array and then assign how many elements it can hold 
 without assiging a value.

    int luckyNumbers[20]; 
    luckyNumber[0] = 80;
    Now the first varible will be 80
    */

    return 0;
}