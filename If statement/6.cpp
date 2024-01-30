#include <stdio.h>

int main(){
	double foo, bar, spam, eggs;
	
	printf("Enter first decimal number: ");
		scanf("%lf", &foo);
	printf("Enter second decimal number: ");
		scanf("%lf", &bar);
	printf("Enter third decimal number: ");
		scanf("%lf", &spam);
	printf("%.2lf %.2lf ", foo, bar);	
	eggs  = foo + bar;
	if(spam > eggs){
		printf("%.2lf", spam);
	};
}
