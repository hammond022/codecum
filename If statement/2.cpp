#include <stdio.h>

int main(){
	int foo, bar;
	
	printf("Enter first integer: ");
		scanf("%i", &foo);
	printf("Enter second integer: ");
		scanf("%i", &bar);
		
	printf("%i %i", foo,bar);
	if( foo == bar){
		printf("\nequal");
		
	}
}
