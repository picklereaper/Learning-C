#include <stdio.h>
#include <stdlib.h>

/*
int max(int num1, int num2){  //<<Function
	int result;
	if(num1 > num2){ //specifying condition
		result = num1;
	} else {
		result = num2;
	}
	return result;
}

int main()
{
	printf("%d\n", max(10, 1) );

	return 0;
}
*/

//making this more complex:

int max(int num1, int num2, int num3){  //<<Function
	int result;
	if(num1 >= num2 && num1 >= num3){
		result = num1;
	} else if (num2 >= num1 && num2 >= num3){
		result = num2;
	} else {
		result = num3;
	}

	return result;
}

int main()
{
	printf("%d\n", max(1000, 100, 30) );

	//using 'or' || in if statements 
	if (2 > 1 || 2 > 3){
		printf("True\n");
	}
	/*The differnce between 'and' (&&) and 'or' (||), is that 'or' only needs one condition to be true,
	while and needs all conditions to be true. */

	//negating something
	if (!(3 < 2)) //The ! is what negates the operation, so since 3 is not less than 2, this will now return True on our print function.
		printf("True\n");

	return 0;
}