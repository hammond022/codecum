#include <stdio.h>

int main(){
	int foo, bar;
	
	printf("Enter first integer: ");
		scanf("%i", &foo);
	printf("Enter second integer: ");
		scanf("%i", &bar);
		
	double spam = (double)foo;
	double eggs = (double)bar;

	spam *= eggs;
	spam -= 3.22;
	
	printf("%.2lf", spam);
		
}
