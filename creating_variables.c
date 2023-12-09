#include<stdio.h>

int main ()
{
    //changing a variable
    int age =35;
    printf("\nAge: %d", age);

    age = 45;
    printf("\nNew age: %d\n", age);

    //sharing a value
    int firstNumber = 3432;
    printf("firstNumber = %d", firstNumber);

    int secondNumber = firstNumber;
    printf("\nsecondNumber = %d\n", secondNumber);
    return 0;
}