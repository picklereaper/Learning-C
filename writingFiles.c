#include<stdio.h>
#include<stdlib.h>

//This exercise will demonstrate creating, modifying, and change files in C.

int main(){

	//creating:
	//FILE creates a pointer on the machine. fopen is the function("file name"), file mode. The basic file mods are:
	// r (read), w (write, this can create a new file or overwrite), a (append)
	// this exercise will look at 'w' and 'a'.
	// NOTE: If you do not direct a path for the file to be created in, it will populate in the current directory you are working in. 
	FILE * filepointer = fopen("sample.txt", "a"); // Whenever you open a file in C, you need to close it with fclose.

	//Adding info to the file
	fprintf(filepointer, "\nHere is an appended line!");


	fclose(filepointer);

	return 0;
}