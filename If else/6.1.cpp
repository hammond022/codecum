#include <stdio.h>

int main(){
	double foo, bar, spam, eggs;
	
	printf("Enter x: ");
		scanf("%lf", &foo);
	printf("Enter y: ");
		scanf("%lf", &bar);
	printf("Enter z: ");
		scanf("%lf", &spam);
		
	if(  spam >= foo && spam <= bar){
		printf("%.2lf is within %.2lf and %.2lf", spam, foo, bar);
	}
	else if(  spam <= foo && spam >= bar){
		printf("%.2lf is within %.2lf and %.2lf", spam, foo, bar);		
	}
	else{
		printf("%.2lf is outside %.2lf and %.2lf", spam, foo, bar);				
	}
}
