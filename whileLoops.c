#include<stdio.h>
#include<stdlib.h>


int main(){
	
	//A while loop is a structure that can be used to loop over and over in a 
	//certain block of code until a certain condition is false.

	//This example will show the basic workflow of a while loop.

	int index = 1;
	while(index <= 10){
		printf("%d\n", index);
		index ++; //This is equivlent to index = index + 1

	}

	return 0;
}


//There is also something called a 'do while' loop:

/*

int main(){

	int index = 11;
	do { // A do while loop will execute all of this code first, so the print function will print even if the 
		 //	condition is not met. 11 will still print, even though it is greater than the condition.

		printf("%d\n", index);
		index ++;
	} while(index <= 10);

	return 0;
}

*/