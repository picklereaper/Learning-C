#include<stdio.h>
#include<stdlib.h>

// A two dimensional array is a situation where all of the elements
// inside of an array are arrays themselves. 

// Nested loops are loops inside of loops.

int main(){
	//The two brackets represent the width and height of a 2D array.
	//Our first bracket will have 3, since there are 3 elements in the array
	//Each array has 2 elements inside of them so we enter 2 in the second bracket. 
	int nums[3][2] = {
	{1, 2}, //First element in the nums array.
	{3, 4},	//Second element of the nums array. 
	{5, 6}

	};

//	printf("%d\n", nums[0][0]);
	//To access the Top Left element in element one first we need to tag the index, starting at 0. 
	//To access the first value in the first index (the number 1), we need to enter 0 in the second bracket. 

	//Now for the nested loop:

	int valueA, valueB;
	// We chose 3 here since that is the number of arrays in our 2D array. 
	for(valueA = 0; valueA < 3; valueA++){
		for(valueB = 0; valueB < 2; valueB++){ //We chose 2 here since that is the amount of values in each array. 
			printf("%d, ", nums[valueA][valueB]);
		}
		printf("\n");

	}

	return 0;
}