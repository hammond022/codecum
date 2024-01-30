#include <stdio.h>
 
int main(){
	float foo;
	
	printf("Enter a decimal number: ");
		scanf("%f", &foo);
	
	int bar = (int)foo;
	bar *= 5;
	
	printf("%i", bar);
		
}
