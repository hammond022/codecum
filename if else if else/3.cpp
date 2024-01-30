#include <stdio.h> 

int main(){
	
	int foo, bar, spam;
	
	printf("Enter first number: ");
		scanf("%i", &foo);
	printf("Enter second number: ");
		scanf("%i", &bar);
		
	foo += bar;
	
	if(foo == 0 ){
		printf("Zero");
	}
	else if(foo > 0){
		printf("Positive");
	}
	else if(foo < 0 ){
		printf("Negative");
	}
}
