#include <stdio.h>

int main(){
	double foo, bar;
	
	printf("Enter first decimal number: ");
		scanf("%lf", &foo);
	printf("Enter second decimal number: ");
		scanf("%lf", &bar);
		
	printf("%.2lf %.2lf", foo, bar);
	
	if(foo > bar){
		printf("\nThe first one is greater than the second one");
	}
}
