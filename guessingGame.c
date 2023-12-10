#include<stdio.h>
#include<stdlib.h>

int main(){

	int secretNumber = 5;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;

	while(guess != secretNumber && outOfGuesses == 0){
		if(guessCount < guessLimit){
			printf("Please enter your guess: \n");
			scanf("%d", &guess);
			guessCount ++;
		} else {
			outOfGuesses = 1; //This creates a boolean variable. If they are out of guesses, the variable equals one, or 'yes'.
		}

	}	

	if(outOfGuesses == 1) {
		printf("Out of guesses.\n");
	}else {
		printf("You guessed the number!\n");
	}


	return 0;
}