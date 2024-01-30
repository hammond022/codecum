#include <stdio.h>
#include <math.h>

int main(){
	float foo, bar;
	
	printf("Enter a decimal number: ");
		scanf("%f", &foo);
		
	bar = floor(foo);
	printf("%.0f", bar);
}
