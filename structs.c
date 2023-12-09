#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*A struct is a data structure where we can store groups of data types.
	This allows you to store a string with an integer along side a character, and so on all in one data structure. */

//This struct will store data of a student.

struct Student{ //Often times structs are created using a capital letter.
	char name[50];
	char major[50];
	int age;
	double gpa;

};


int main() {

//Student 1

	struct Student student1; //This allows us to store information for student1 using the variables from Student.
	student1.age = 22;
	student1.gpa = 2.7;
	/*student1.name = This method does not work
	To give value to character strings we need to use something called the 
	string copy function that will take a string and give it a value that we specify. */
	strcpy(student1.name, "Carl");
	strcpy(student1.major, "English");

	printf("Name = %s\n", student1.name);
	printf("Major = %s\n", student1.major);
	printf("Age = %d\n", student1.age);
	printf("GPA = %lf\n", student1.gpa);
	printf("\n");

//Student 2

	struct Student student2;
	student2.age = 35;
	student2.gpa = 3.7;
	strcpy(student2.name, "Will");
	strcpy(student2.major, "Computer Science");


	printf("Name = %s\n", student2.name);
	printf("Major = %s\n", student2.major);
	printf("Age = %d\n", student2.age);
	printf("GPA = %lf\n", student2.gpa);



	return 0;
}