#include<stdio.h>
#include<stdlib.h>

// A pointer is basically a memory address. A memory address refers to a physical adderss inside of the memory of the computer.
// This lesson will show us how we can work with pointers.
// In order to create a pointer variable, we will need a memory address. 
// When you create a pointer variable, you need to store the memory address of a variable that is already in a program. 

int main() {

	int age = 30;
	int * pAge = &age;
	double gpa = 3.4
	double * pGpa = &gpa;
	char grade = 'A'
	char * pGrade = &grade;


	printf("age's memory address: %p\n", &age);

	return 0;
}