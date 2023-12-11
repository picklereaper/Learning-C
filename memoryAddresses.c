#include<stdio.h>
#include<stdlib.h>

//This exercise will demonstrate how to access memory addresses. 

int main(){

	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

// 'p' stands for pointer

	printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

/* 
age: 0x7ffe9813f4dc
gpa: 0x7ffe9813f4e0
grade: 0x7ffe9813f4db

These are the addresses that C and our computers use to access these variables. 
*/

	return 0;
}