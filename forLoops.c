#include<stdio.h>
#include<stdlib.h>

/*A 'for loop' allows us to use an indexing variable that can tell us
what iteration of the loop we are curerntly on. We can use the indexing variable to due a varity of things 
such as loop through an array of items. */

//This exercise will demonstrate a basic for loop.

// Here is a basic while loop.

/*
int main(){

	int value = 1;
	while(value <= 5){
		printf("%d\n", value);
		value++;
	} */

// The difference between a for loop and a while loop happens inside the parethesis. 
// A while loop has the condition, or our loop guard. This specifies whether or not we can keep
// looping though.

// A for loop has three different loop guards: 
// The variable, the looping condition, and the action (in this case incrementing the value variable).

// Here is a for loop executing the same process as the while loop. 

/*
int main(){	
	int value;
	for(value = 1; value <= 5; value++){
		printf("%d\n", value);

	}

	return 0;
}
*/
//This will demonstrate a for loop looping through elements in an array. 

int main(){
	int luckyNumbers[] = {4, 8, 12, 16, 20, 24, 28};

	int value;
	for (value = 0; value < 7; value++) { //We must set the value to 0 since arrays start at 0. Value is less than 7, since there are seven units in the array. 
		printf("%d\n", luckyNumbers[value]); // This allows us to print out the array element at 'value's current position. Which is 0, or the first unit. This will continue to print the entire array.

	}

}