#include <stdio.h>
#include <math.h>
int main(){
	int foo;
	
	printf("Enter an integer: ");
		scanf("%i", &foo);
	
	float fooSin = sin(foo);
	float fooCos = cos(foo);
	float fooTan = tan(foo);
	
	
	
	printf("%.2f\n%.2f\n%.2f", fooSin, fooCos, fooTan);
}
