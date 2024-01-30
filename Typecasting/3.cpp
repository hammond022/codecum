#include <stdio.h>

int main(void) {
	double foo, bar;
	
	printf("Enter first number: ");
		scanf("%lf", &foo);
	printf("Enter second number: ");
		scanf("%lf", &bar);
		
	foo += bar;
	int spam = (int)foo;
	printf("%i", spam);
}
