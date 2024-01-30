#include <stdio.h>

int main(){

	int foo, bar;
	
	printf("Enter integer x: ");
		scanf("%i", &foo);
	printf("Enter integer y: ");
		scanf("%i", &bar);
	
	if( foo > bar){
		printf("x is greater than y");
	}
	else if( foo < bar){
		printf("x is lesser than y");
		
	}
	else if( foo == bar){
		printf("x is equal to y");
	}
	
	
} 
