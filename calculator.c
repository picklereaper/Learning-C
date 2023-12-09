#include <stdio.h>
#include <stdlib.h>

int main(){
	double num2;
	double num1; //Numbers they want to use.
	char op; //Operator they want to use.

	printf("Enter a number: \n");
	scanf("%lf", &num1);
	printf("Enter operator: \n");
	scanf(" %c", &op); //You always want to put a space before %c when using scanf or it will not work.
	printf("Enter a number: ");
	scanf("%lf", &num2);

	if(op == '+'){
		printf("%f\n", num1 + num2);
	} else if(op == '-'){
		printf("%f\n", num1 - num2);
	} else if(op == '*'){
		printf("%f\n", num1 * num2);
	} else if(op == '/'){
		printf("%f\n", num1 / num2);
	} else {
		printf("Invalid operator.\n");
	}


	return 0;
}