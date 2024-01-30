#include <stdio.h>

int main(){
	int foo, bar , spam, eggs;
	
	printf("Enter an integer: ");
		scanf("%i", &foo);
	
	
	

	

	if(foo % 7 ==  0 && foo % 3 != 0){
		printf("Code");
	}
	else if(foo % 7 !=  0 && foo % 3 == 0){
		printf("Chum");
	}
	else if(foo % 7 ==  0 && foo % 3 == 0){
		printf("CodeChum");
	}
	else{
		printf("None of the above");
	}
}
