#include<stdio.h>

int main ()
{
    /*
    int         (4 bytes) | %d for printing
    double      (8 bytes) | %lf for printing
    float       (4 bytes) | %f for printing
    char        (1 bytes) | %c for printing
    */

   int age =23;
   printf("Age: %d\n", age);

   double number = 12.45;
   printf("%.2lf\n", number); //the ".2" allows you to cut off after the second decimal number

   float number1 = 10.9f; //"f" on the end of the number indicates that the number is a float
   printf("%.2f\n", number1);

   double number2 = 5.5e6; //5.5 into 10 of the power of 6
   printf("%lf\n", number2);

   //character type data
   char character = 'z'; //SINGLE QUOTES
   printf("%c\n", character);
   printf("%d\n", character); //Characters are internally stored as numbers. 

   //sizeof()Operator, used to find the size of data types.

   printf("int size = %zu\n", sizeof (age));
   printf("double size = %zu\n", sizeof (number));


    return 0;
}