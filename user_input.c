#include<stdio.h>

int main ()
{
    int age; //Stores input data by making it a variable. 
    printf("Enter your age: ");
    scanf("%d", &age); // Scanner function, %d is the type of input data, and age is the variable name. The ampersand indicates the variable address, or the memory address. 
    printf("Age = %d\n", age);

    //Double input

    double number;
    char alphabet;
    printf("Enter double input: ");
    scanf("\n%lf", &number);

    printf("Enter character input: \n");
    scanf("\n%c", &alphabet);

    printf("Number: %lf", number);
    printf("\nCharacter: %c\n", alphabet);


    //Multiple inputs.

    double number2;
    char alpha2;

    printf("Please enter multiple values, number then character.\n");
    scanf("%lf %c", &number2, &alpha2);

    printf("Number: %lf\n", number2);
    printf("Character: %c\n", alpha2);

    return 0;
}