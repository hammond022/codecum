#include <stdio.h>
#include <math.h>

int main(){
	int foo, bar;
	
	printf("Enter first negative integer: ");
		scanf("%i", &foo);
	printf("Enter second negative integer: ");
		scanf("%i", &bar);
			
	bar= abs(foo+bar);
	printf("%i", bar); 
}
