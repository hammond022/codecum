#include <stdio.h>

int main(){
	int foo, bar;
	
	printf("Enter a single integer: ");
		scanf("%i", &foo);
	printf("%i", foo);
	bar = foo % 2;	
	if(bar == 0 && foo != 0){
		printf("\neven");
	}
}
