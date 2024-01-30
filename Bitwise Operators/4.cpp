#include <stdio.h>

int main(){
	int foo, bar, spam;
	
	printf("Enter a number: ");
		scanf("%i", &foo);

	bar = foo;
	foo = foo << 1;
	bar = bar >> 1;
	spam = foo + bar;
	
	printf("Result: %i", spam);
	
	
}
