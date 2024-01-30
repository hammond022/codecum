#include <stdio.h>
#include <math.h>
int main(){
	float foo;
	
	printf("Enter a decimal number: ");
		scanf("%f", &foo);
	int bar = ceil(foo);
	printf("%i", bar);
}
