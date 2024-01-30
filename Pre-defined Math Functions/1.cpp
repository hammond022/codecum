#include <stdio.h>
#include <math.h>
int main(){
	int foo;
	
	printf("Enter an integer: ");
		scanf("%i", &foo);
	float bar = sqrt(foo);
	printf("%.2f", bar);
}
