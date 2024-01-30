#include <stdio.h>

int main(){
	int foo, bar, spam;
	
	printf("Enter an integer: ");
		scanf("%i", &foo);
	
	bar = foo % 2;
	if(foo == 0){printf("Zero");}
	else if(bar == 0){printf("Even");}
	else if(bar != 0){printf("Odd");}
}
