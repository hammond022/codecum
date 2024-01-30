#include <stdio.h>

int main(){
	int foo, bar;
	
	printf("Enter your birth year: ");
		scanf("%i", &foo);
	
	if(foo <= 1962){
		printf("senior citizen");
	}
	else{
		printf("not senior citizen");		
	}
}
