#include<stdio.h>
#include<stdlib.h>

/*double cube(double num) {
    double result = num * num * num;
    return result;
    //Remember that 'return' breaks out out of a funchtion, so once it is called, that is it. 
}

int main ()
{
    // Cubing a number, or raising it to the 3rd power, 2^3 or 2*2*2
    printf("Answer: %f\n", cube(2.0));
    //                          ^^Value that is being multiplied. 

    return 0;
}
*/

//Another way to do this is a method called 'prototyping:


double cube(double num);

int main()
{
    printf("Answer: %f\n", cube(7.0));
    
    return 0;
}

double cube(double num){
    return num * num * num; 
    //This particular line works in both contexts. 
}
