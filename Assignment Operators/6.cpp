#include <stdio.h>

int main(){
	double x, y, foo;
	
	printf("Enter x: ");
		scanf("%lf", &x);
	printf("Enter y: ");
		scanf( "%lf",&y);
	
	printf("Before:\nx = %.1lf, y = %.1lf", x, y);
	
	x *= y;
	
	printf("\nAfter:\nx = %.1lf, y = %.1lf", x, y);
}
