#include <stdio.h>
#include <math.h>

int main(){
	double foo, bar;
	
	printf("Enter x: ");
		scanf("%lf", &foo);
	printf("Enter y: ");
		scanf("%lf", &bar);
		
		
	bar = pow(foo,bar);
	printf("%.0lf", bar);
	
		
}
