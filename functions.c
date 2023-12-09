#include<stdio.h>
#include<stdlib.h>

int main ()  //main is a function, and you can create more. Can also be called methods. 
{
    sayHi("Matt", 33);
    sayHi("Joe", 44);
    sayHi("Bob", 790);
    return 0;
}

//Void means it will not return any information
void sayHi(char name[], int age[]){
    printf("Hello %s, you are %d\n", name, age);
}