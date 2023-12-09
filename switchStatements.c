#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*Swtich statements are special types of 'if' statements that allow us to 
	compare one value with a bunch of different values. This example will take a letter grade and compare it
	to other grades to let you know if you did good or bad. */
	char grade = 'A';
	
	//Basic structure of a switch statement. 
	switch(grade){
	case 'A' :
		printf("You did great!\n");
		break;
	case 'B' :
		printf("You did pretty good!\n");
		break;
	case 'C' :
		printf("You passed!\n");
		break;
	case 'D' :
		printf("You barely made it...\n");
		break;
	case 'F' :
		printf("You have failed.\n");
		break;
	default : //In case the user give an invalid response, or just the response if no conditions are met. 
		printf("Invalid response.");
	}





	return 0;
}