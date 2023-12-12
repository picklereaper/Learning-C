#include<stdio.h>
#include<stdlib.h>

//Reading files in C.

int main(){

	char line[255];
	FILE * filepointer = fopen("sample.txt", "r");

	//fgets allows us to read files line by line. 
	//First we need to give fgets a place to store the information. We are storing it in the line variable above. 
	//

	fgets(line, 255, filepointer);
	fgets(line, 255, filepointer); // Each additional fgets will display a new line on the file, but not all at once, so this code will only give me the second line. 
	printf("%s\n", line);

	fclose(filepointer);

	return 0;
}