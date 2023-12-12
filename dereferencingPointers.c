#include<stdio.h>
#include<stdlib.h>

// When you derefernce a pointer, essentially what you are doing is you're going to the memory address of that variable.
// and grabbing the piece of information there. 

int main(){

	int age = 30;
	int * pAge = &age;

	printf("%d\n", *pAge); // We dereference it by using the *. In this case we need to use a number, since this is no longer a pointer. 
						   // Now, this is going to be whatever was stored at the memory address the pointer was pointing to, in this case an integer.
	//We could also use this method:
	// printf("%d\n", *&age);
	return 0;
}