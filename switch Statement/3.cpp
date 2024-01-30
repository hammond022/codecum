#include <stdio.h>
#define INVALID -999.99


int main(){
	double num1, num2, invalid = INVALID;
	char op;
	
	printf("Enter first number: ");		scanf("%lf", &num1);
	printf("Enter second number: ");	scanf("%lf", &num2);
	printf("Enter operation (+, -, *, or /): ");	scanf(" %c", &op);
	printf("Result: ");
	switch(op){
		case '+': printf("%.2lf", num1 + num2);		break;
		case '-': printf("%.2lf", num1 - num2);		break;
		case '*': printf("%.2lf", num1 * num2);		break;
		case '/': printf("%.2lf", num1 / num2);		break;
		default: printf("%.2lf", invalid); break;
	}
	
}
